#include "main.h"

// ���� �Լ� //
void main(void) {       

    system("mode con: cols=40 lines=30");                       // �ܼ� â ũ�� ����
    system("COLOR 0F");                                         // �ܼ� ���� ���� ���� (���)              

    CursorView();                                               // Ŀ�� ���� �Լ�

    // ���� ������ �ݺ� //
    while (1) {
        
        init();                                                 // Enemy ����ü�� �ʱ갪 ����

        int point = 0;                                          // ������ ���� ���� ����

        system("cls");                                          // ȭ�� �ʱ�ȭ

        int select = menu();                                    // menu()�Լ� ȣ�� �� place���� ���Ϲ޾� select������ ����

        while (1) {                                             // ���� ����
           
            if (DamagedPlayer() == TRUE) {                      // �÷��̾ �Ҷ˿� �¾��� ���
                GameOver(&point);                               // GameOver()�Լ� ȣ��
                break;                                          // while�� Ż��
            }

            if (select == 0) {                                  // select ���� 0�� ���
                srand((int)malloc(NULL));                       // �Ź� ������ ������ �ٸ� ���� �ֱ� ���� �õ尪 ����
                CreateEnemy();                                  // �� ���� �Լ� ȣ��
                FallEnemy();                                    // �� ������ �Լ� ȣ��
                DelEnemy(&point);                               // �� ���� �Լ� ȣ��
                MovePlayer();                                   // �÷��̾� �̵� �Լ� ȣ��
                PrintGame(&point);                              // ���� ȭ��, ��, �÷��̾� ��� �Լ� ȣ��

                Sleep(70);                                      // ������ �ӵ� ������ ���� Sleep ����
            }

            // �̿ϼ� (���� ���� ����) //
            else if (select == 1) {                             
                system("cls");
                gotoxy(8, 13);
                printf("���� ���� ����");
                system("pause > nul");
                break;
            }

            else if (select == 2) {                             // select ���� 2�� ���
                return;                                         // main()�Լ� ��ü�� ��ȯ��
            }
        }
    }
}