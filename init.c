#include "main.h"

// 구조체의 초깃값 설정 //
void init() {
    for (int i = 0; i < WIDTH; i++)             // 0부터 WIDTH(20)까지 돌면서
        enemy[i].con = FALSE;                   // enemy 상태 FALSE(0)로 설정

    player.x = WIDTH / 2;                       // 플레이어 위치 중앙으로 설정
}