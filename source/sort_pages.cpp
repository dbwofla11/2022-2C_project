#include "main_and_sort.h"

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
		insert_sort();
		break;
	case 4:
		cls;
		merge_sort();
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

	gotoxy(1, 60);
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
	printf("\n버블정렬에 들어왔습니다.\n");
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
	printf("\n병합정렬에 들어왔습니다.\n");

	int merge_arr[10] = { 5 , 4 , 2 , 3 , 1 , 6 , 8 , 9 , 7 , 0 };
	merge_sort_animation(merge_arr , 10);

	printf(" 0  1  2  3  4  5  6  7  8  9 ");
	printf("\n0을 누르면 이전화면으로 되돌아갑니다.\n");
	backbuffer = _getch();
	if (backbuffer == '0') {
		cls;
		printf("시작화면으로 돌아갑니다....");
		Sleep(1000);
		start_main();
	}
}

void insert_sort(void) {
	int backbuffer = 1;
	//삽입정렬 애니메이션
	printf("\n삽입정렬에 들어왔습니다.\n");
	insert_sort_animation();

	printf("\n0을 누르면 이전화면으로 되돌아갑니다.\n");
	backbuffer = _getch();
	if (backbuffer == '0') {
		cls;
		printf("시작화면으로 돌아갑니다....");
		Sleep(1000);
		start_main();
	}
}
