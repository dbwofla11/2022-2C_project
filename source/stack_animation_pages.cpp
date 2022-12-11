#include "main_and_sort.h"
#include "stack.h"
using namespace std;

enum ColorType_stack {
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

typedef int element;
element stack[stack_size];

int top = -1; 

void push(element item) { // ������ �߰� ���� 
	if (top >= stack_size - 1) {
		printf("������ ���� á���ϴ�. \n");
		return;
	}
	else stack[++top] = item;
}

element pop() { // ������ ���� ���� 
	if (top == -1) {
		printf("������ ����ֽ��ϴ�. \n");
	}
	else return stack[top--];

}

element peek() { //���� ��ȸ ���� 
	if (top <= -1) {
		printf("������ ����ֽ��ϴ�\n");
	}
	else return stack[top];
}

// ���� ȭ�鿡�� ���� ��ư�� Ŭ��������
void stack_anima(void) {
	string s = 
		R"(typedef int element;
element stack[stack_size];

int top = -1; 

void push(element item) { // ������ �߰� ���� 
	if (top >= stack_size - 1) {
		printf("������ ���� á���ϴ�. \n");
		return;
	}
	else stack[++top] = item;
}

element pop() { // ������ ���� ���� 
	if (top == -1) {
		printf("������ ����ֽ��ϴ�. \n");
	}
	else return stack[top--];

}

element peek() { //���� ��ȸ ���� 
	if (top <= -1) {
		printf("������ ����ֽ��ϴ�\n");
	}
	else return stack[top];
})";
	
	printf("\n������ ������ ǥ�� ����̴� \n������ ���� ���� ���� ���߿� ������ ���������� ����� ����Ѵ�. \n\n");
	SetColor(GREEN);
	cout << s;
	SetColor(WHITE);

	// ���� �޴� ���� ���� 
	int backbuffer = 1;


	// ���� �ִϸ��̼� ���� 
	printf("\n\n##< ���� �ִϸžƼ� �ڵ� ���� ��� >##\n");
	
	for (int i = 1; i <= 6; i++) {
		SetColor(BLUE);
		printf("\n���ÿ� push(%d)\n",  i );
		SetColor(WHITE);
		push(i);
		Sleep(700);
		SetColor(YELLOW);
		printf("���� ��ȸ �� : %d \n", peek());
		SetColor(WHITE);
	}
	printf("������ �ְ� ������ �϶��� ��ħ\n");


	printf("\n##< ���� pop( )���� 5�� ���� >##\n");
	for (int i = 1; i < 6; i++) {
		SetColor(BLUE);
		printf("\n���� pop�� : %d \n", pop());
		SetColor(WHITE);
		Sleep(700);
		SetColor(YELLOW);
		printf("���� ��ȸ �� : %d \n", peek());
		SetColor(WHITE);
	}

	printf("\n\n������ �� ���� �ٴ��� �������� �ϸ� �̻��� ���� \" %%d \" �� ���� ��");
	
	printf("\n\n0�� ������ ����ȭ������ �ǵ��ư��ϴ�.\n");
	backbuffer = _getch();
	if (backbuffer == '0') {
		cls;
		printf("����ȭ������ ���ư��ϴ�....\n");
		Sleep(1000);
		start_main();
	}
}

