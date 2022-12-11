#include "main_and_sort.h"

// 애니메이션 컬러
enum ColorType_sort {
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

//<선택정렬>
//선택정렬 애니메이션 
void select_sort_animation(void) {
	
	printf("\n 처음 숫자 배열 상태 : { 5 , 4 , 2 , 3 , 1 , 6 , 8 , 9 , 7 , 0 } \n");
	printf("초록색 : 지금 탐색 중인 값 ,	\n보라색 : 이미 읽은 값( 안 읽을 값 )   ,    \n노랑색 : 스와핑 예정일 값 ( 제일 큰 값 ) \n");
	printf("\n");

	int select_arr[10] = { 5 , 4 , 2 , 3 , 1 , 6 , 8 , 9 , 7 , 0 };
	int max_i , k ;

	for (int i = 10; i > 1; i--) { // 정렬할 범위를 축소해서 시간을 줄임
		max_i = 0;
		for (k = 1; k < i; k++) {
			if (select_arr[max_i] < select_arr[k]) max_i = k;
			ViewArr_select(select_arr, 10, i, k, max_i, 0); // 스와핑 현황 안나옴
			Sleep(300);
			}
		swap( select_arr[max_i] , select_arr[i - 1] );
		ViewArr_select(select_arr, 10 , i , k , max_i , 1 ); // 중간 상태 출력  
	}
}

//배열 상태 출력하기 < 선택 정렬 > -- 제일 큰 거 뽑아서 뒤에서 부터 스와핑 
void ViewArr_select(int *arr, int size , int cnt , int search , int max_i , int op) { // 맨 마지막 옵션은 스와핑 사실 여부 판별 
	
	for (int i = 0; i < 10; i++) {
		if (i < search)
		{
			if (i == max_i ) SetColor(YELLOW);
			else SetColor(WHITE);
		}
		else if (i == search) SetColor(GREEN); //지금 읽고 있는 값 
		else if (i < cnt)  SetColor(WHITE); // 지금 일고 있는거 왼쪽 
		else if (i >= cnt)	SetColor(PURPLE); // 지금 읽고 있는거 오른쪽 ( 안 읽을 거 ) 

		printf("%2d ", arr[i]);
	}
	SetColor(WHITE);
	if (op) printf("SWAP %d %d", arr[cnt - 1], arr[max_i]);
	printf("\n");
}



//<버블정렬>
//버블정렬 애니메이션 
void bubble_sort_animation(void) {
	
	int i, k;
	int bubble_arr[10] = { 5 , 4 , 2 , 3 , 1 , 6 , 8 , 9 , 7 , 0 };

	for ( i = 10; i > 1; i-- ) {
		for (k = 1; k < i; k++) {
			if (bubble_arr[k - 1] > bubble_arr[k]) {
				ViewArr_bubble(bubble_arr, i, k, 10, 1); // 스와핑 할때는 옵션이 1 
				swap(bubble_arr[k - 1], bubble_arr[k]);
			}
			ViewArr_bubble(bubble_arr, i, k, 10, 0);
			Sleep(100);
		}
	}
}

void ViewArr_bubble(int * arr , int i , int k , int n , int op) {
	int s = 0;
	for (s = 0; s < n; s++) {
		if (s < k - 1) SetColor(WHITE);
		else if (s == k - 1) SetColor(YELLOW);
		else if (s == k) SetColor(RED);
		else if (s < i) SetColor(WHITE);
		else if (s >= i) SetColor(PURPLE);
		printf("%2d ", arr[s]);
	}
	
	SetColor(WHITE);
	if (op) printf(" swap %d %d ", arr[k - 1], arr[k]);
	printf("\n");
}



//<삽입정렬>
//삽입정렬 애니메이션 
void insert_sort_animation(void) {

	int i, k;
	int insert_arr[10] = { 5 , 4 , 2 , 3 , 1 , 6 , 8 , 9 , 7 , 0 };

	for (i = 1; i < 10 ; i++) { // 정렬할 범위를 확대해감 
		for (k = i; k > 0; k--) { // 범위 설정만 버블정렬과 다름 비교는 같음 ( 범위 부터 읽기 ) 
			if (insert_arr[k - 1] > insert_arr[k]) {
				ViewArr_insert(insert_arr , i , k , 10 , 1);
				swap(insert_arr[k - 1], insert_arr[k]);
				Sleep(100);
			}
			else {
				break; // 이미정리가 된거 
			}
		}
		ViewArr_insert(insert_arr, i, k, 10, 0);
	}
}

void ViewArr_insert(int * arr , int i , int k , int n , int op) {

	int s = 0;
	for (s = 0; s < n; s++) {
		if (s <= i) {
			if (op == 0) SetColor(PURPLE); // 바꾸는 것이 아니고 이미 정렬이 된 상태 
			else {
				if (s == k - 1) SetColor(YELLOW);
				else if (s == k) SetColor(GREEN);
				else SetColor(PURPLE);
			}
		}
		else SetColor(WHITE);
		printf("%2d ", arr[s]);
	}
	SetColor(WHITE);
	if (op) printf("swap %d %d", arr[k - 1], arr[k]);
	printf("\n");
}



//<병합정렬>
//병합정렬 애니메이션
void merge_sort_animation(int* arr, int n)
{
	int ahalf = n / 2; //배열의 앞쪽 개수
	int bhalf = n - ahalf; //배열의 뒤쪽 개수
	int ai = 0, bi = ahalf;
	int i = 0;

	int* origin;

	origin = arr;

	int* tbase = 0;

	if (n <= 1)//배열의 크기가 1보다 작거나 같을 때
	{
		return;
	}


	merge_sort_animation(arr, ahalf);//앞쪽 배열 재귀호출로 정렬
	PrintSpace(arr - origin);
	ViewArr_merge(arr, ahalf);

	merge_sort_animation(arr + ahalf, bhalf);//뒤쪽 배열 재귀호출로 정렬
	PrintSpace(arr + ahalf - origin);
	ViewArr_merge(arr + ahalf, bhalf);

	tbase = (int*)malloc(sizeof(int) * n);//배열 크기의 임시 공간을 할당
	memcpy(tbase, arr, sizeof(int) * n);//임시 공간에 배열 메모리 복사

	while ((ai < ahalf) && (bi < n))
	{
		if (tbase[ai] <= tbase[bi])//뒤쪽이 크거나 같을 때
		{
			arr[i] = tbase[ai];//앞쪽 배열의 원소를 대입
			ai++;
		}
		else
		{
			arr[i] = tbase[bi];//뒤쪽 배열의 원소를 대입
			bi++;
		}
		i++;
	}

	while (ai < ahalf)//앞쪽 배열의 남은 것들을 대입
	{
		arr[i] = tbase[ai];
		i++;
		ai++;
	}

	while (bi < n)//뒤쪽 배열의 남은 것들을 대입
	{
		arr[i] = tbase[bi];
		i++;
		bi++;
	}

	free(tbase);//임시 버퍼에 할당한 메모리 해제        

}

void PrintSpace(int n)
{
	int i = 0;
	Sleep(100);
	for (i = 0; i < n; i++)
	{
		printf("   ");
	}
}

void ViewArr_merge(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%2d ", arr[i]);
	}
	printf("\n");
}
