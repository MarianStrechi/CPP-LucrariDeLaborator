#pragma once

const int WIDTH = 20;
const int HEIGHT = 10;

extern int map[HEIGHT][WIDTH];
extern int pacmanX, pacmanY;
extern int score;

void ClearScreen();
void Draw();
void Input();
void Logic();
