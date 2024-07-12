#include "main.h"

// 플레이어가 적에게 닿을 경우 (패배) //
int DamagedPlayer() {

    for (int i = 0; i < WIDTH; i++)
    {
        // 적의 상태가 TRUE && 적의 위치가 y = 0 즉 바닥 && 적의 x축 위치 = 플레이어의 x축 위치이면
        if ((enemy[i].con && enemy[i].y == 0) && (enemy[i].x == player.x))
            
            // TRUE 반환 (게임 종료)
            return TRUE;
    }

    // 닿지 않았으면 FALSE 반환 (게임 진행)
    return FALSE;               
}