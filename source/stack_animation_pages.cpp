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

void push(element item) { // 스택의 추가 연산 
	if (top >= stack_size - 1) {
		printf("스택이 가득 찼습니다. \n");
		return;
	}
	else stack[++top] = item;
}

element pop() { // 스택의 삭제 연산 
	if (top == -1) {
		printf("스택이 비워있습니다. \n");
	}
	else return stack[top--];

}

element peek() { //스택 조회 연산 
	if (top <= -1) {
		printf("스택이 비워있습니다\n");
	}
	else return stack[top];
}

// 메인 화면에서 스택 버튼을 클릭했을때
void stack_anima(void) {
	string s = 
		R"(typedef int element;
element stack[stack_size];

int top = -1; 

void push(element item) { // 스택의 추가 연산 
	if (top >= stack_size - 1) {
		printf("스택이 가득 찼습니다. \n");
		return;
	}
	else stack[++top] = item;
}

element pop() { // 스택의 삭제 연산 
	if (top == -1) {
		printf("스택이 비워있습니다. \n");
	}
	else return stack[top--];

}

element peek() { //스택 조회 연산 
	if (top <= -1) {
		printf("스택이 비워있습니다\n");
	}
	else return stack[top];
})";
	
	printf("\n다음은 스택의 표현 방법이다 \n스택은 먼저 들어가는 것이 나중에 나오는 선입후출을 방식을 사용한다. \n\n");
	SetColor(GREEN);
	cout << s;
	SetColor(WHITE);

	// 선택 메뉴 변수 선언 
	int backbuffer = 1;


	// 스택 애니메이션 시작 
	printf("\n\n##< 스택 애니매아션 코드 실행 결과 >##\n");
	
	for (int i = 1; i <= 6; i++) {
		SetColor(BLUE);
		printf("\n스택에 push(%d)\n",  i );
		SetColor(WHITE);
		push(i);
		Sleep(700);
		SetColor(YELLOW);
		printf("스택 조회 값 : %d \n", peek());
		SetColor(WHITE);
	}
	printf("스택의 최고 사이즈 일때는 넘침\n");


	printf("\n##< 스택 pop( )연산 5번 수행 >##\n");
	for (int i = 1; i < 6; i++) {
		SetColor(BLUE);
		printf("\n스택 pop값 : %d \n", pop());
		SetColor(WHITE);
		Sleep(700);
		SetColor(YELLOW);
		printf("스택 조회 값 : %d \n", peek());
		SetColor(WHITE);
	}

	printf("\n\n스택을 다 비우고 바닦을 긁을려고 하면 이상한 값이 \" %%d \" 에 들어가게 됨");
	
	printf("\n\n0을 누르면 이전화면으로 되돌아갑니다.\n");
	backbuffer = _getch();
	if (backbuffer == '0') {
		cls;
		printf("시작화면으로 돌아갑니다....\n");
		Sleep(1000);
		start_main();
	}
}

