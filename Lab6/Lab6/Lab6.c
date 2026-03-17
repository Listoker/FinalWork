#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "locale.h"
#include <string.h>
#define WINDOWS "russian"
int main(void)
{
	
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int *ykaz = a2;
	int a0;
	int a1;
	int a2[20];
	//Возводим 2 в 32 степени и делим на 2, затем вычитаем 1
	a0 = pow(2, 32) / 2 - 1;
	printf("�������� ��������������� �����: ");
	for (int i = 0; i < 20; i++) {
		*ykaz = rand();
		printf("%d ", *ykaz);
		if (*ykaz % 2 == 0) {
			if (a0 > *ykaz) {
				a0 = *ykaz;
			}
		}
		ykaz++;
	}
	if (a0 == pow(2, 32) / 2 - 1) {
		printf("\n����� ��������������� ����� �� ���� ������\n");
	}
	else {
		printf("\n����� ��������� ������ �����: %d\n", a0);
	}



	int massiv[100], charlotte, otv = 0, i = 0;
	int *wiltshir = massiv;
	int *ykaz2 = massiv;
	printf("\n������� ��������� ������ �� ����� �����. ��� �� ��������� ����, ������� -1, �� ������� ����� 100 �����: ");
	//Считываем числа до -1 или до 100 чисел
	while (scanf("%d", &charlotte) == 1 && charlotte != -1) {
		if (i <= 100) {
			*wiltshir = charlotte;
			i++;
			wiltshir++;
		}
		else {
			break;
		}
	}
	wiltshir -= i;
	ykaz2++;
	for (int ii = 0; ii < i; ii++) {
		if (*wiltshir == *ykaz2) {
			otv++;
		}
		wiltshir++;
		ykaz2++;
	}
	printf("���������� ����� ��� ���������� �������� ��������� � ������� ������� : %d", otv);
}