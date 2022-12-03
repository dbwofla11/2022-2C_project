#include "main.h"

void sort_interpace(int num) {

	switch (num)
	{
	case 0:
		cls;
		printf("시작화면으로 돌아갑니다....");
		Sleep(1000);
		start_main();
	case 1:
		cls;
		select_sort();
		break;
	case 2:
		cls;
		bubble_sort();
		break;
	case 3:
		cls;
		merge_sort();
		break;
	default:
		break;
	}

}

//선택정렬 화면 
void select_sort(void) {
	int backbuffer = 1;
	printf("\n선택정렬에 들어왔습니다.\n");
	//선택 애니메이션 
	select_sort_animation();

	printf("\n0을 누르면 이전화면으로 되돌아갑니다.\n");
	backbuffer = _getch();
	if (backbuffer == '0') {
		cls;
		printf("시작화면으로 돌아갑니다....");
		Sleep(1000);
		start_main();
	}
}

//버블정렬 화면 
void bubble_sort(void) {
	int backbuffer = 1;
	printf("버블정렬에 들어왔습니다.");
	//버블정렬 애니메이션 
	bubble_sort_animation();

	printf("\n0을 누르면 이전화면으로 되돌아갑니다.\n");
	backbuffer = _getch();
	if (backbuffer == '0') {
		cls;
		printf("시작화면으로 돌아갑니다....");
		Sleep(1000);
		start_main();
	}
}

//병합정렬 화면 
void merge_sort(void) {
	int backbuffer = 1;
	//병합정렬 애니메이션
	merge_sort_animation();

	printf("\n0을 누르면 이전화면으로 되돌아갑니다.\n");
	backbuffer = _getch();
	if (backbuffer == '0') {
		cls;
		printf("시작화면으로 돌아갑니다....");
		Sleep(1000);
		start_main();
	}
}

