#include "main.h"

// ���� ���� �� ���� �Լ� //
void GameOver(int* point) {
	system("cls");									// ȭ�� �ʱ�ȭ

	gotoxy(4, 11);
	printf("! ! G A M E  O V E R ! !");						    // ���ϴ� ��ġ�� "GAME OVER" ���� ���

	gotoxy(6, 13);
	printf(" S C O R E �� %d", *point);					// ���ϴ� ��ġ�� �÷��̾� ���� ���

	gotoxy(0, 15);
	printf(" ���� ȭ������ ������ Tab Ű�� �����ÿ�");
	system("pause > nul");							// ���� ��� ���� ��ɾ� ���
}