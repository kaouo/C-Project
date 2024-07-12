#include "main.h"

// 피하기 성공한 적 (바닥에 떨어진 적) 삭제 함수 //
void DelEnemy(int* point) {

    for (int i = 0; i < WIDTH; i++)
    {
        if (enemy[i].con && enemy[i].y < 0) {         // enemy 상태가 TRUE && enemy의 y축 값이 0보다 작을 경우
            enemy[i].con = FALSE;                     // enemy 상태를 FALSE로 변경
            *point += 1;                              // 점수 1점 추가
        }
    }
}