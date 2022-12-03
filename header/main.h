#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h>
#include <stralign.h>
#include <stdlib.h>
#include <conio.h>

#define pause system("pause > nul")
#define cls system("cls")

//함수 선언은 헤더파일에서 해도 상관 없다 
// API 함수 ( 시작 화면 ) 
void SetColor(int color);
void CursorView(char show);
void gotoxy(int x, int y);

//시작 페이지 구성 
void mainPtr(void);
void start_main(void);

// 정렬 보기 메뉴 선택 
void sort_interpace(int x);

// 정렬 선택하기 
void select_sort(void);
void bubble_sort(void);
void merge_sort(void);

//정렬 애니메이션 
void select_sort_animation(void);
void bubble_sort_animation(void);
void merge_sort_animation(void);
