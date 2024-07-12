#include "main.h"

// Ä¿¼­ ¼û±è ÇÔ¼ö //
void CursorView() {
    CONSOLE_CURSOR_INFO cursorInfo = { 0 };
    cursorInfo.dwSize = 1;                                                   // Ä¿¼­ ±½±â
    cursorInfo.bVisible = FALSE;                                             // Ä¿¼­ Visible TRUE(º¸ÀÓ) FALSE(¼û±è)
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}