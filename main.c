#include "main.h"

// 메인 함수 //
void main(void) {       

    system("mode con: cols=40 lines=30");                       // 콘솔 창 크기 조절
    system("COLOR 0F");                                         // 콘솔 글자 색상 변경 (흰색)              

    CursorView();                                               // 커서 숨김 함수

    // 닿지 않으면 반복 //
    while (1) {
        
        init();                                                 // Enemy 구조체의 초깃값 설정

        int point = 0;                                          // 점수를 담을 변수 선언

        system("cls");                                          // 화면 초기화

        int select = menu();                                    // menu()함수 호출 후 place값을 리턴받아 select변수에 저장

        while (1) {                                             // 무한 루프
           
            if (DamagedPlayer() == TRUE) {                      // 플레이어가 불똥에 맞았을 경우
                GameOver(&point);                               // GameOver()함수 호출
                break;                                          // while문 탈출
            }

            if (select == 0) {                                  // select 값이 0일 경우
                srand((int)malloc(NULL));                       // 매번 실행할 때마다 다른 값을 주기 위한 시드값 설정
                CreateEnemy();                                  // 적 생성 함수 호출
                FallEnemy();                                    // 적 움직임 함수 호출
                DelEnemy(&point);                               // 적 삭제 함수 호출
                MovePlayer();                                   // 플레이어 이동 함수 호출
                PrintGame(&point);                              // 게임 화면, 적, 플레이어 출력 함수 호출

                Sleep(70);                                      // 게임의 속도 조절을 위해 Sleep 설정
            }

            // 미완성 (추후 수정 예정) //
            else if (select == 1) {                             
                system("cls");
                gotoxy(8, 13);
                printf("추후 수정 예정");
                system("pause > nul");
                break;
            }

            else if (select == 2) {                             // select 값이 2일 경우
                return;                                         // main()함수 자체를 반환함
            }
        }
    }
}