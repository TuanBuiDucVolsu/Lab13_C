#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include "startf.h"

void taskSelection() {
	int selection;
	do {
		printf("������� ����� ��� ������������� ������� ������������ �������: (1-4) \n");
		printf("1 ��� ����� ������� �1 � �2 (����� ������ � ����)\n");
		printf("2 ��� ������ ������� �3 \n");
		printf("3 ��� ������ ������� �4 \n");
		printf("4 ��� ������� ������� �������� 4 \n");
		scanf("%d", &selection);
		getc(stdin);
	} while ((selection > 4) || (selection < 1));
	if (selection == 1)  taskTwo();
	if (selection == 2)  taskThree();
	if (selection == 3)  taskFour();
	if (selection == 4)  taskMain();
}

int main()
{	
	setlocale(LC_ALL, "");
	taskSelection();
	return 0;
}