#include "main.h"

void sort_interpace(int num) {

	switch (num)
	{
	case 0:
		cls;
		printf("����ȭ������ ���ư��ϴ�....");
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

//�������� ȭ�� 
void select_sort(void) {
	int backbuffer = 1;
	printf("\n�������Ŀ� ���Խ��ϴ�.\n");
	//���� �ִϸ��̼� 
	select_sort_animation();

	printf("\n0�� ������ ����ȭ������ �ǵ��ư��ϴ�.\n");
	backbuffer = _getch();
	if (backbuffer == '0') {
		cls;
		printf("����ȭ������ ���ư��ϴ�....");
		Sleep(1000);
		start_main();
	}
}

//�������� ȭ�� 
void bubble_sort(void) {
	int backbuffer = 1;
	printf("�������Ŀ� ���Խ��ϴ�.");
	//�������� �ִϸ��̼� 
	bubble_sort_animation();

	printf("\n0�� ������ ����ȭ������ �ǵ��ư��ϴ�.\n");
	backbuffer = _getch();
	if (backbuffer == '0') {
		cls;
		printf("����ȭ������ ���ư��ϴ�....");
		Sleep(1000);
		start_main();
	}
}

//�������� ȭ�� 
void merge_sort(void) {
	int backbuffer = 1;
	//�������� �ִϸ��̼�
	merge_sort_animation();

	printf("\n0�� ������ ����ȭ������ �ǵ��ư��ϴ�.\n");
	backbuffer = _getch();
	if (backbuffer == '0') {
		cls;
		printf("����ȭ������ ���ư��ϴ�....");
		Sleep(1000);
		start_main();
	}
}

