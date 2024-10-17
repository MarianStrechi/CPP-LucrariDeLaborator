#pragma once
#include <iostream>
#include <string>

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
