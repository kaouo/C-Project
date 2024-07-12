#include "main.h"

// 커서 좌표 변경 함수 //
void gotoxy(int x, int y) {
    COORD pos = { x * 2, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}