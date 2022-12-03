#include "main.h"

void start_main(void) {
	int POS = 4;

	CursorView(0);    //커서의 깜빡임을 숨겨준다.
	system("COLOR 0F");    //화면 배경을 검정, 글씨 색깔을 하얀색으로 설정해 준다.
	mainPtr();
	while (true) {

		POS = _getch();
		// 기능 선택 
		switch (POS) {
		case '0':
			SetColor(11);
			gotoxy(50, 7); printf("정렬 보기");
			SetColor(15);
			gotoxy(50, 9); printf("탐색 보기");
			gotoxy(50, 11); printf("게임  종료");
			break;
		case '1':
			gotoxy(50, 7); printf("정렬 보기");
			SetColor(11);
			gotoxy(50, 9); printf("탐색 보기");
			SetColor(15);
			gotoxy(50, 11); printf("게임  종료");
			break;
		case '2':
			gotoxy(50, 7); printf("정렬 보기");
			gotoxy(50, 9); printf("탐색 보기");
			SetColor(11);
			gotoxy(50, 11); printf("게임  종료");
			SetColor(15);
			break;
		default: break;
		}
		Sleep(1500);
		break;
	}
	cls;

	if (POS == '0') {
		puts("\n정렬 보기를 눌렀습니다.\n");

		printf("1. 선택정렬\n");
		printf("2. 버블정렬\n\n");
		printf("0. 시작화면으로 돌아가기\n");
		int select = 0;
		printf("\n기능을 선택해 주세요 : ");
		scanf("%d", &select);

		sort_interpace(select); // 선택창 불러오기 
		Sleep(1500);
	}
	else if (POS == '1') puts("탐색 보기를 눌렀습니다.");
	pause;
}

void mainPtr(void) {
	system("mode con: cols=106 lines=18");   //참고로 cols 2단위가 특수문자 또는 한글 1글자다.
	system("title 알고리즘 시각화");
	puts("\n알고리즘 시각화 매뉴 선택\n\n");
	puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	gotoxy(50, 7); printf("정렬 보기");
	gotoxy(50, 9); printf("탐색 보기");
	gotoxy(50, 11); printf("게임  종료");
	return;
}

