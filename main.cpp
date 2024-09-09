#include "Game.hpp"
#include <windows.h>

int main() {
    map[1][2] = 2;
    map[1][3] = 2;
    map[2][7] = 2;
    map[5][5] = 2;

    while (true) {
        Draw();
        Input();
        Logic();
        Sleep(100);
    }

    return 0;
}
