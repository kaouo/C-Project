#include "main.h"

// ���� ȭ�� ��� //
void PrintGame(int* point) {
 
    system("cls");                                          // ��� ȭ�� clear => cls ������ ����
                                                            // ���� ���� ȭ���� ������ �������� ���ο� ���� ȭ���� ���
    
    gotoxy((WIDTH / 2) - 6, HEIGHT + 3);                    // ���� ���� ���
    printf("  �� �� �� �� �� �� ��\n");                      // WIDTH�� HEIGHT�� ���� ȭ���� ���ο� ���� ũ�⸦ ��Ÿ���� ��ũ�� ���
    gotoxy((WIDTH / 2) - 3, HEIGHT + 4);
    printf("S C O R E %d", *point);                         // ���� ���� ���

    for (int i = 0; i < WIDTH; i++)
    {
        if (enemy[i].con)                                   // ���� ������ ���°� Ȱ��ȭ
        {
            gotoxy(enemy[i].x, HEIGHT - enemy[i].y);        // �� ��ġ�� ���� �̵� �� ���
            SetColor(4);                                    // ���������� ����
            printf("��");                                    // '��' ���ڸ� ���
            SetColor(15);                                   // ������ ����� �ڵ忡 ������ ���� �ʰ� ������� ����
        }                                                   // ������ ���� ȭ�鿡�� �������� ����� �ð������� Ȯ���� �� ����
    }

    // �÷��̾� ��� //
    gotoxy(player.x, HEIGHT);                               // �÷��̾� ��ġ ����
    printf("��");                                            // �÷��̾� �̸�Ƽ��

    // �ٴ� ��� //
    gotoxy(0, HEIGHT + 1);                                  // �ٴ� ��ġ ����
    for (int i = 0; i < WIDTH; i++)                         // WIDTH ��ŭ�� '��' ���ڸ� ���
        printf("��");
}