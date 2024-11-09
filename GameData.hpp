#pragma once
#include <iostream>
#include <string>
#include <memory>
#include <vector>

class GameData {
public:
    std::string playerName;
    int score;

    GameData();
    GameData(const GameData& other);
    GameData(std::string name, int score);
    GameData& operator=(const GameData& other);
    bool operator==(const GameData& other) const;

    friend std::istream& operator>>(std::istream& input, GameData& data);
    friend std::ostream& operator<<(std::ostream& output, const GameData& data);
};


void readGameData(std::istream& input, std::vector<std::shared_ptr<GameData>>& dataContainer);
void printGameData(std::ostream& output, const std::vector<std::shared_ptr<GameData>>& dataContainer);
void sortGameDataByScore(std::vector<std::shared_ptr<GameData>>& dataContainer);
std::shared_ptr<GameData> findGameDataByName(const std::vector<std::shared_ptr<GameData>>& dataContainer, const std::string& playerName);
