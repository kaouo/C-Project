#include "main.h"

// �÷��̾ ������ ���� ��� (�й�) //
int DamagedPlayer() {

    for (int i = 0; i < WIDTH; i++)
    {
        // ���� ���°� TRUE && ���� ��ġ�� y = 0 �� �ٴ� && ���� x�� ��ġ = �÷��̾��� x�� ��ġ�̸�
        if ((enemy[i].con && enemy[i].y == 0) && (enemy[i].x == player.x))
            
            // TRUE ��ȯ (���� ����)
            return TRUE;
    }

    // ���� �ʾ����� FALSE ��ȯ (���� ����)
    return FALSE;               
}