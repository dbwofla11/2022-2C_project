#include "main.h"

void start_main(void) {
	int POS = 4;

	CursorView(0);    //Ŀ���� �������� �����ش�.
	system("COLOR 0F");    //ȭ�� ����� ����, �۾� ������ �Ͼ������ ������ �ش�.
	mainPtr();
	while (true) {

		POS = _getch();
		// ��� ���� 
		switch (POS) {
		case '0':
			SetColor(11);
			gotoxy(50, 7); printf("���� ����");
			SetColor(15);
			gotoxy(50, 9); printf("Ž�� ����");
			gotoxy(50, 11); printf("����  ����");
			break;
		case '1':
			gotoxy(50, 7); printf("���� ����");
			SetColor(11);
			gotoxy(50, 9); printf("Ž�� ����");
			SetColor(15);
			gotoxy(50, 11); printf("����  ����");
			break;
		case '2':
			gotoxy(50, 7); printf("���� ����");
			gotoxy(50, 9); printf("Ž�� ����");
			SetColor(11);
			gotoxy(50, 11); printf("����  ����");
			SetColor(15);
			break;
		default: break;
		}
		Sleep(1500);
		break;
	}
	cls;

	if (POS == '0') {
		puts("\n���� ���⸦ �������ϴ�.\n");

		printf("1. ��������\n");
		printf("2. ��������\n\n");
		printf("0. ����ȭ������ ���ư���\n");
		int select = 0;
		printf("\n����� ������ �ּ��� : ");
		scanf("%d", &select);

		sort_interpace(select); // ����â �ҷ����� 
		Sleep(1500);
	}
	else if (POS == '1') puts("Ž�� ���⸦ �������ϴ�.");
	pause;
}

void mainPtr(void) {
	system("mode con: cols=106 lines=18");   //����� cols 2������ Ư������ �Ǵ� �ѱ� 1���ڴ�.
	system("title �˰��� �ð�ȭ");
	puts("\n�˰��� �ð�ȭ �Ŵ� ����\n\n");
	puts("������������������������������������������������������");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	printf("������������������������������������������������������");
	gotoxy(50, 7); printf("���� ����");
	gotoxy(50, 9); printf("Ž�� ����");
	gotoxy(50, 11); printf("����  ����");
	return;
}

