#include "main.h"

// 게임 화면 출력 //
void PrintGame(int* point) {
 
    system("cls");                                          // 모든 화면 clear => cls 없으면 쌓임
                                                            // 이전 게임 화면의 내용이 지워지고 새로운 게임 화면을 출력
    
    gotoxy((WIDTH / 2) - 6, HEIGHT + 3);                    // 게임 제목 출력
    printf("  불 똥 피 하 기 게 임\n");                      // WIDTH와 HEIGHT는 게임 화면의 가로와 세로 크기를 나타내는 매크로 상수
    gotoxy((WIDTH / 2) - 3, HEIGHT + 4);
    printf("S C O R E %d", *point);                         // 게임 점수 출력

    for (int i = 0; i < WIDTH; i++)
    {
        if (enemy[i].con)                                   // 현재 적군의 상태가 활성화
        {
            gotoxy(enemy[i].x, HEIGHT - enemy[i].y);        // 적 위치에 적군 이동 및 출력
            SetColor(4);                                    // 빨간색으로 변경
            printf("ω");                                    // 'ω' 문자를 출력
            SetColor(15);                                   // 다음에 실행될 코드에 지장이 가지 않게 흰색으로 변경
        }                                                   // 적군이 게임 화면에서 떨어지는 모습을 시각적으로 확인할 수 있음
    }

    // 플레이어 출력 //
    gotoxy(player.x, HEIGHT);                               // 플레이어 위치 선정
    printf("○");                                            // 플레이어 이모티콘

    // 바닥 출력 //
    gotoxy(0, HEIGHT + 1);                                  // 바닥 위치 선정
    for (int i = 0; i < WIDTH; i++)                         // WIDTH 만큼의 '▩' 문자를 출력
        printf("▩");
}