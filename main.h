#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

// �ɺ��� ��� ���� //
#define WIDTH 20         // ����
#define HEIGHT 23        // ����
#define TRUE 1           // ��
#define FALSE 0          // ����

// �� == �Ҷ�(���� ��) //
typedef struct {         // �͸� ����ü 
    int x;               // x ��ǥ
    int y;               // y ��ǥ
    int con;             // ���� ���¸� (TRUE, FALSE)�� ��Ʈ���� ��
}Enemy;                  // �͸� ����ü ����

// �÷��̾� //
typedef struct {
    int x;               // x ��ǥ
}Player;                 // �͸� ����ü ����

Enemy enemy[WIDTH];      // Enemy ����ü �迭�� �����ؼ� WIDTH ��ŭ�� ����ü ���
Player player;           // Player ����ü�� player ��� �̸����� ���

// ���� �ý��� //
void gotoxy(int, int);   // Ŀ�� ��ǥ ���� �Լ�
void SetColor(int);      // �ؽ�Ʈ ���� ���� �Լ�
void CursorView();       // Ŀ�� ���� �Լ�

// ����� ���� �Լ� ���� ���� //
void init();             // ����ü �ʱ갪 ���� �Լ�
int menu();
void CreateEnemy();      // Enemy(�Ҷ�) ���� �Լ�
void FallEnemy();        // Enemy(�Ҷ�) ������ �Լ�
void DelEnemy(int*);     // Enemy(�Ҷ�) ���� �Լ�
int DamagedPlayer();     // Player(�÷��̾�) �ǰ� ���� �Լ�
void MovePlayer();       // Player(�÷��̾�) �̵� �Լ�
void PrintGame(int*);    // ���� ȭ��, �Ҷ�, �÷��̾� ��� �Լ�
void GameOver(int*);     // ���� ���� �� ���� �Լ�