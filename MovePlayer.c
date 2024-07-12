#include "main.h"

// 플레이어 이동 함수(좌/우) //
void MovePlayer() {

    if (GetAsyncKeyState(VK_LEFT))      // 왼쪽 방향키 입력 시
        player.x--;                     // x좌표 1 감소

    if (GetAsyncKeyState(VK_RIGHT))     // 오른쪽 방향키 입력 시
        player.x++;                     // x 좌표 1 증가

    // 위치 범위 제한 //
    if (player.x < 0)                   // x 좌표가 0보다 작아졌을 경우
        player.x = 0;                   // x 좌표를 0으로 설정
    if (player.x > WIDTH - 1)           // x 좌표가 19보다 클 경우
        player.x = WIDTH - 1;           // x 좌표를 19로 설정
}