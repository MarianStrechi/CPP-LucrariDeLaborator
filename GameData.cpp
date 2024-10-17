#include "GameData.hpp"

GameData::GameData() : playerName("Unknown"), score(0) {}

GameData::GameData(const GameData& other) {
    playerName = other.playerName;
    score = other.score;
}

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
