#include "main.h"

// Ŀ�� ��ǥ ���� �Լ� //
void gotoxy(int x, int y) {
    COORD pos = { x * 2, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}