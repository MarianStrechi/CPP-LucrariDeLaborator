#include "pch.h" // Include precompilat generat automat de Visual Studio
#include "GameData.hpp" // Include calea relativă către clasa ta
#include <gtest/gtest.h>

TEST(GameDataTest, ConstructorTest) {
    GameData player("Player1", 100);
    EXPECT_EQ(player.playerName, "Player1");
    EXPECT_EQ(player.score, 100);
}

TEST(GameDataTest, EqualityTest) {
    GameData player1("Player1", 100);
    GameData player2("Player1", 100);
    EXPECT_TRUE(player1 == player2);
}
