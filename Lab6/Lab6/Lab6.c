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
	int a0, a1, a2[20];
	int *ykaz = a2;
	srand(time(NULL));
	a0 = pow(2, 32) / 2 - 1;
	printf("Исходные псевдорандомные числа: ");
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
		printf("\nСреди псевдорандомных чисел не было чётных\n");
	}
	else {
		printf("\nСамое маленькое чётное число: %d\n", a0);
	}



	int massiv[100], charlotte, otv = 0, i = 0;
	int *wiltshir = massiv;
	int *ykaz2 = massiv;
	printf("\nВведите двумерный массив из целых чисел. Что бы закончить ввод, введите -1, не вводите более 100 чисел: ");
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
	printf("Количество числа пар одинаковых соседних элементов в строках массива : %d", otv);
}