#include "main.h"

// ���ϱ� ������ �� (�ٴڿ� ������ ��) ���� �Լ� //
void DelEnemy(int* point) {

    for (int i = 0; i < WIDTH; i++)
    {
        if (enemy[i].con && enemy[i].y < 0) {         // enemy ���°� TRUE && enemy�� y�� ���� 0���� ���� ���
            enemy[i].con = FALSE;                     // enemy ���¸� FALSE�� ����
            *point += 1;                              // ���� 1�� �߰�
        }
    }
}