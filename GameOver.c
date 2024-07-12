#include "main.h"

// 게임 오버 시 실행 함수 //
void GameOver(int* point) {
	system("cls");									// 화면 초기화

	gotoxy(4, 11);
	printf("! ! G A M E  O V E R ! !");						    // 원하는 위치에 "GAME OVER" 글자 출력

	gotoxy(6, 13);
	printf(" S C O R E ▶ %d", *point);					// 원하는 위치에 플레이어 점수 출력

	gotoxy(0, 15);
	printf(" 메인 화면으로 가려면 Tab 키를 누르시오");
	system("pause > nul");							// 문구 출력 없이 명령어 사용
}