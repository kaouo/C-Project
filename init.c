#include "main.h"

// ����ü�� �ʱ갪 ���� //
void init() {
    for (int i = 0; i < WIDTH; i++)             // 0���� WIDTH(20)���� ���鼭
        enemy[i].con = FALSE;                   // enemy ���� FALSE(0)�� ����

    player.x = WIDTH / 2;                       // �÷��̾� ��ġ �߾����� ����
}