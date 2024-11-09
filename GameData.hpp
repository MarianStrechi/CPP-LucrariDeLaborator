#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <algorithm>

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


    static void addPlayer(const std::string& playerName, int score);
    static void sortPlayersByScore();
    static std::shared_ptr<GameData> findPlayer(const std::string& playerName);
    static void displayAllPlayers();

private:
    static std::vector<std::shared_ptr<GameData>> players;
};
