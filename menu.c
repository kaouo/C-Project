#include "main.h"

#define COL_1 10
#define COL_2 13
#define COL_3 16

int menu() {

	int place = 0;									// place 변수 선언 및 초기화

	while (1) {
		gotoxy(8, COL_1);
		printf("게임 시작");							// 원하는 위치에 "게임 시작" 버튼 생성
		gotoxy(8, COL_2);
		printf("순위 보기");							// 원하는 위치에 "순위 보기" 버튼 생성
		gotoxy(8, COL_3);
		printf("게임 종료");							// 원하는 위치에 "게임 종료" 버튼 생성

		if (GetAsyncKeyState(VK_UP)) {				// ↑키가 눌렸을 경우 place 변수 1 감소
			place -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN)) {		// ↓키가 눌렸을 경우 place 변수 1 증가
			place += 1;
		}
		else if (GetAsyncKeyState(VK_RETURN)) {		// Enter키가 눌렸을 경우 
			break;									// while문 탈출
		}
		if (place == -1) {							// place 변수 값이 -1일 때
			place = 0;								// place 변수 값을 0으로 지정
		}
		else if (place == 3) {						// place 변수 값이 3일 때
			place = 2;								// place 변수 값을 2로 지정
		}

		switch (place) {							// place 변수에 대한 switch ~ case문 실행
		case 0:										// place 변수 값이 0일 경우
			SetColor(12);							// 글꼴 색상 값을 빨간색으로 지정
			gotoxy(8, COL_1);
			printf("게임 시작");						// 설정한 위치에 "게임 시작" 덮어쓰기
			SetColor(15);							// 다른 버튼 흰색 유지
			break;
		case 1:										// place 변수 값이 1일 경우
			SetColor(12);							// 글꼴 색상 값을 빨간색으로 지정
			gotoxy(8, COL_2);
			printf("순위 보기");						// 설정한 위치에 "순위 보기" 덮어쓰기
			SetColor(15);							// 다른 버튼 흰색 유지
			break;
		case 2:										// place 변수 값이 2일 경우
			SetColor(12);							// 글꼴 색상 값을 빨간색으로 지정
			gotoxy(8, COL_3);
			printf("게임 종료");						// 설정한 위치에 "게임 종료" 덮어쓰기
			SetColor(15);							// 다른 버튼 흰색 유지ㄴ
			break;
		}

		Sleep(150);									// place 값이 변경될 때 속도 조절

	}

	return place;									// break문이 작동했을 때 place 값을 반환
}