#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h>
#include <stralign.h>
#include <stdlib.h>
#include <conio.h>

#define pause system("pause > nul")
#define cls system("cls")

//�Լ� ������ ������Ͽ��� �ص� ��� ���� 
// API �Լ� ( ���� ȭ�� ) 
void SetColor(int color);
void CursorView(char show);
void gotoxy(int x, int y);

//���� ������ ���� 
void mainPtr(void);
void start_main(void);

// ���� ���� �޴� ���� 
void sort_interpace(int x);

// ���� �����ϱ� 
void select_sort(void);
void bubble_sort(void);
void merge_sort(void);

//���� �ִϸ��̼� 
void select_sort_animation(void);
void bubble_sort_animation(void);
void merge_sort_animation(void);
