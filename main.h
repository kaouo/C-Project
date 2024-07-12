#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

// 심볼릭 상수 선언 //
#define WIDTH 20         // 가로
#define HEIGHT 23        // 세로
#define TRUE 1           // 참
#define FALSE 0          // 거짓

// 적 == 불똥(피할 것) //
typedef struct {         // 익명 구조체 
    int x;               // x 좌표
    int y;               // y 좌표
    int con;             // 적의 상태를 (TRUE, FALSE)로 컨트롤할 것
}Enemy;                  // 익명 구조체 별명

// 플레이어 //
typedef struct {
    int x;               // x 좌표
}Player;                 // 익명 구조체 별명

Enemy enemy[WIDTH];      // Enemy 구조체 배열로 선언해서 WIDTH 만큼의 구조체 사용
Player player;           // Player 구조체를 player 라는 이름으로 사용

// 서브 시스템 //
void gotoxy(int, int);   // 커서 좌표 변경 함수
void SetColor(int);      // 텍스트 색상 변경 함수
void CursorView();       // 커서 숨김 함수

// 사용자 지정 함수 원형 선언 //
void init();             // 구조체 초깃값 설정 함수
int menu();
void CreateEnemy();      // Enemy(불똥) 생성 함수
void FallEnemy();        // Enemy(불똥) 움직임 함수
void DelEnemy(int*);     // Enemy(불똥) 삭제 함수
int DamagedPlayer();     // Player(플레이어) 피격 판정 함수
void MovePlayer();       // Player(플레이어) 이동 함수
void PrintGame(int*);    // 게임 화면, 불똥, 플레이어 출력 함수
void GameOver(int*);     // 게임 오버 시 실행 함수