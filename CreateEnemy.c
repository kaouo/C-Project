#include "main.h"

// 적 생성 함수 //
void CreateEnemy() {

    for (int i = 0; i < WIDTH; i++)
    {

        if (!enemy[i].con)                        // enemy의 i번째 구조체에 con이라는 멤버 변수의 값이 FALSE(0)일 경우 실행
        {   

            enemy[i].x = rand() % WIDTH;          // 가로(x축) 무작위로 적 출현
            enemy[i].y = HEIGHT - 1;              // 세로(y축) 출현 위치 항상 일치

            enemy[i].con = TRUE;                  // 적이 출현한 인덱스 [i]의 상태 = TRUE로 변경

            return;                               // CreateEnemy() 함수 종료
        }
    }
}