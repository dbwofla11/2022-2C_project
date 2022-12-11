#include "main_and_sort.h"

enum ColorType_start {
	BLACK = 0,  	//0
	darkBLUE = 1,	//1
	DarkGreen = 2,	 //2
	darkSkyBlue = 3,    //3
	DarkRed = 4,  	//4
	DarkPurple = 5,	//5
	DarkYellow = 6,	//6
	GRAY = 7,		//7
	DarkGray = 8,	//8
	BLUE = 9,		//9
	GREEN = 10,		//10
	SkyBlue = 11,	//11
	RED = 12,		//12
	PURPLE = 13,		//13
	YELLOW = 14,		//14
	WHITE = 15		//15
} COLOR;

void start_main(void) {
	int POS = 4;

	CursorView(0);    //커서의 깜빡임을 숨겨준다.
	system("COLOR 0F");    //화면 배경을 검정, 글씨 색깔을 하얀색으로 설정해 준다.
	mainPtr();
	while (true) {

		POS = _getch();
		// 기능 선택 
		switch (POS) {
		case '1':
			SetColor(SkyBlue); // 11은 파랑색 
			gotoxy(52, 8); printf("정렬 ");
			SetColor(WHITE); // 15는 하양
			gotoxy(52, 10); printf("스택 ");
			gotoxy(53, 12); printf("큐 ");
			gotoxy(50, 19); printf("게임 종료");
			break;
		case '2':
			gotoxy(52, 8); printf("정렬 ");
			SetColor(SkyBlue);
			gotoxy(52, 10); printf("스택 ");
			SetColor(WHITE);
			gotoxy(53, 12); printf("큐 ");
			gotoxy(50, 19); printf("게임 종료");
			break;
		case '3':
			gotoxy(52, 8); printf("정렬 ");
			gotoxy(52, 10); printf("스택 ");
			SetColor(SkyBlue);
			gotoxy(53, 12); printf("큐 ");
			SetColor(WHITE);
			gotoxy(50, 19); printf("게임 종료");
			break;
		case '4':
			gotoxy(52, 8); printf("정렬 ");
			gotoxy(52, 10); printf("스택 ");
			gotoxy(53, 12); printf("큐 ");
			SetColor(SkyBlue);
			gotoxy(50, 19); printf("게임 종료");
			SetColor(WHITE);
		default: break;
		}
		Sleep(1500);
		break;
	}
	cls;

	if (POS == '1') {
		puts("\n정렬 보기를 눌렀습니다.\n");

		printf("1. 선택정렬\n");
		printf("2. 버블정렬\n");
		printf("3. 삽입정렬\n");
		printf("4. 병합정렬\n\n");
		printf("0. 시작화면으로 돌아가기\n");

		int select = 0;
		printf("\n기능을 선택해 주세요 : ");
		scanf("%d", &select);

		sort_interpace(select); // 선택창 불러오기 
		Sleep(1500);
	}

	else if (POS == '2') {
		puts("스택 보기를 눌렀습니다.\n");
		stack_anima();
	}

	else if (POS == '3') {
		puts("큐 보기를 눌렀습니다.");
		//qu_anima();
	}

	else if (POS == '4') {
		puts("시스템을 종료합니다");
		Sleep(5000);
		exit(1);
	}
	pause;
}

void mainPtr(void) {
	system("mode con: cols=106 ");   //참고로 cols 2단위가 특수문자 또는 한글 1글자다.
	system("title 알고리즘 사전");
	gotoxy(38, 2); printf("<<  알고리즘 시각화 매뉴 선택  >>");
	puts("");
	puts("");
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
	gotoxy(52, 8); printf("정렬 ");
	gotoxy(52, 10); printf("스택 ");
	gotoxy(53, 12); printf("큐 ");
	gotoxy(50, 19); printf("게임 종료");
	return;
}

