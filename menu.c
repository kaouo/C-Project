#include "main.h"

#define COL_1 10
#define COL_2 13
#define COL_3 16

int menu() {

	int place = 0;									// place ���� ���� �� �ʱ�ȭ

	while (1) {
		gotoxy(8, COL_1);
		printf("���� ����");							// ���ϴ� ��ġ�� "���� ����" ��ư ����
		gotoxy(8, COL_2);
		printf("���� ����");							// ���ϴ� ��ġ�� "���� ����" ��ư ����
		gotoxy(8, COL_3);
		printf("���� ����");							// ���ϴ� ��ġ�� "���� ����" ��ư ����

		if (GetAsyncKeyState(VK_UP)) {				// ��Ű�� ������ ��� place ���� 1 ����
			place -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN)) {		// ��Ű�� ������ ��� place ���� 1 ����
			place += 1;
		}
		else if (GetAsyncKeyState(VK_RETURN)) {		// EnterŰ�� ������ ��� 
			break;									// while�� Ż��
		}
		if (place == -1) {							// place ���� ���� -1�� ��
			place = 0;								// place ���� ���� 0���� ����
		}
		else if (place == 3) {						// place ���� ���� 3�� ��
			place = 2;								// place ���� ���� 2�� ����
		}

		switch (place) {							// place ������ ���� switch ~ case�� ����
		case 0:										// place ���� ���� 0�� ���
			SetColor(12);							// �۲� ���� ���� ���������� ����
			gotoxy(8, COL_1);
			printf("���� ����");						// ������ ��ġ�� "���� ����" �����
			SetColor(15);							// �ٸ� ��ư ��� ����
			break;
		case 1:										// place ���� ���� 1�� ���
			SetColor(12);							// �۲� ���� ���� ���������� ����
			gotoxy(8, COL_2);
			printf("���� ����");						// ������ ��ġ�� "���� ����" �����
			SetColor(15);							// �ٸ� ��ư ��� ����
			break;
		case 2:										// place ���� ���� 2�� ���
			SetColor(12);							// �۲� ���� ���� ���������� ����
			gotoxy(8, COL_3);
			printf("���� ����");						// ������ ��ġ�� "���� ����" �����
			SetColor(15);							// �ٸ� ��ư ��� ������
			break;
		}

		Sleep(150);									// place ���� ����� �� �ӵ� ����

	}

	return place;									// break���� �۵����� �� place ���� ��ȯ
}