#include "main.h"

// Ŀ�� ���� �Լ� //
void CursorView() {
    CONSOLE_CURSOR_INFO cursorInfo = { 0 };
    cursorInfo.dwSize = 1;                                                   // Ŀ�� ����
    cursorInfo.bVisible = FALSE;                                             // Ŀ�� Visible TRUE(����) FALSE(����)
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}