#include "main.h"

// �� ���� �Լ� //
void CreateEnemy() {

    for (int i = 0; i < WIDTH; i++)
    {

        if (!enemy[i].con)                        // enemy�� i��° ����ü�� con�̶�� ��� ������ ���� FALSE(0)�� ��� ����
        {   

            enemy[i].x = rand() % WIDTH;          // ����(x��) �������� �� ����
            enemy[i].y = HEIGHT - 1;              // ����(y��) ���� ��ġ �׻� ��ġ

            enemy[i].con = TRUE;                  // ���� ������ �ε��� [i]�� ���� = TRUE�� ����

            return;                               // CreateEnemy() �Լ� ����
        }
    }
}