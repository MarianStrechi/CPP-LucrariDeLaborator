#include "GameData.hpp"
#include <algorithm>

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


void readGameData(std::istream& input, std::vector<std::shared_ptr<GameData>>& dataContainer) {
    auto newGameData = std::make_shared<GameData>();
    input >> *newGameData;
    dataContainer.push_back(newGameData);
}


void printGameData(std::ostream& output, const std::vector<std::shared_ptr<GameData>>& dataContainer) {
    for (const auto& data : dataContainer) {
        output << *data << std::endl;
    }
}


void sortGameDataByScore(std::vector<std::shared_ptr<GameData>>& dataContainer) {
    std::sort(dataContainer.begin(), dataContainer.end(), [](const std::shared_ptr<GameData>& a, const std::shared_ptr<GameData>& b) {
        return a->score > b->score; 
        });
}


std::shared_ptr<GameData> findGameDataByName(const std::vector<std::shared_ptr<GameData>>& dataContainer, const std::string& playerName) {
    auto it = std::find_if(dataContainer.begin(), dataContainer.end(), [&playerName](const std::shared_ptr<GameData>& data) {
        return data->playerName == playerName;
        });
    if (it != dataContainer.end()) {
        return *it;
    }
    return nullptr;
}
