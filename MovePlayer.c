#include "main.h"

// �÷��̾� �̵� �Լ�(��/��) //
void MovePlayer() {

    if (GetAsyncKeyState(VK_LEFT))      // ���� ����Ű �Է� ��
        player.x--;                     // x��ǥ 1 ����

    if (GetAsyncKeyState(VK_RIGHT))     // ������ ����Ű �Է� ��
        player.x++;                     // x ��ǥ 1 ����

    // ��ġ ���� ���� //
    if (player.x < 0)                   // x ��ǥ�� 0���� �۾����� ���
        player.x = 0;                   // x ��ǥ�� 0���� ����
    if (player.x > WIDTH - 1)           // x ��ǥ�� 19���� Ŭ ���
        player.x = WIDTH - 1;           // x ��ǥ�� 19�� ����
}