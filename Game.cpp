#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Game.hpp"

using namespace std;

int map[HEIGHT][WIDTH] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1},
    {1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1},
    {1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1},
    {1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1},
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1},
    {1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
};

int pacmanX = 1, pacmanY = 1;
int score = 0;

void ClearScreen() {
    system("cls");
}

void Draw() {
    ClearScreen();
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (x == pacmanX && y == pacmanY) {
                cout << "G";
            }
            else if (map[y][x] == 1) {
                cout << "#";
            }
            else if (map[y][x] == 0) {
                cout << " ";
            }
            else if (map[y][x] == 2) {
                cout << ".";
            }
        }
        cout << endl;
    }
    cout << "Scor: " << score << endl;
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'w':
            if (map[pacmanY - 1][pacmanX] != 1) pacmanY--;
            break;
        case 's':
            if (map[pacmanY + 1][pacmanX] != 1) pacmanY++;
            break;
        case 'a':
            if (map[pacmanY][pacmanX - 1] != 1) pacmanX--;
            break;
        case 'd':
            if (map[pacmanY][pacmanX + 1] != 1) pacmanX++;
            break;
        }
    }
}

void Logic() {
    if (map[pacmanY][pacmanX] == 2) {
        score += 10;
        map[pacmanY][pacmanX] = 0;
    }
}
