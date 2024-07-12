#include "main.h"

// 적의 움직임 함수 //
void FallEnemy() {
    
    for (int i = 0; i < WIDTH; i++)
    {
        if (enemy[i].con)               // enemy[i].con의 상태가 TRUE일 경우
        {
            enemy[i].y--;               // y축 1 감소
        }
    }
}