#include "main.h"

// ���� ������ �Լ� //
void FallEnemy() {
    
    for (int i = 0; i < WIDTH; i++)
    {
        if (enemy[i].con)               // enemy[i].con�� ���°� TRUE�� ���
        {
            enemy[i].y--;               // y�� 1 ����
        }
    }
}