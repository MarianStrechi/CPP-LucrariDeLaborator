#include "GameData.hpp"

std::vector<std::shared_ptr<GameData>> GameData::players;

GameData::GameData() : playerName("Unknown"), score(0) {}

GameData::GameData(const GameData& other) : playerName(other.playerName), score(other.score) {}

GameData::GameData(std::string name, int score) : playerName(name), score(score) {}

GameData& GameData::operator=(const GameData& other) {
    if (this != &other) {
        playerName = other.playerName;
        score = other.score;
    }
    return *this;
}

bool GameData::operator==(const GameData& other) const {
    return (playerName == other.playerName && score == other.score);
}

std::istream& operator>>(std::istream& input, GameData& data) {
    std::cout << "Enter player name: ";
    input >> data.playerName;
    std::cout << "Enter score: ";
    input >> data.score;
    return input;
}

std::ostream& operator<<(std::ostream& output, const GameData& data) {
    output << "Player: " << data.playerName << ", Score: " << data.score;
    return output;
}



void GameData::addPlayer(const std::string& playerName, int score) {
    players.push_back(std::make_shared<GameData>(playerName, score));
}

std::shared_ptr<GameData> GameData::findPlayer(const std::string& playerName) {
    auto it = std::find_if(players.begin(), players.end(), [&](const std::shared_ptr<GameData>& data) {
        return data->playerName == playerName;
        });
    return (it != players.end()) ? *it : nullptr;
}

void GameData::sortPlayersByScore() {
    std::sort(players.begin(), players.end(), [](const std::shared_ptr<GameData>& a, const std::shared_ptr<GameData>& b) {
        return a->score > b->score;
        });
}

void GameData::displayAllPlayers() {
    for (const auto& player : players) {
        std::cout << *player << std::endl;
    }
}
