#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include "Header.h"

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n;
	do
	{
		printf("¬ведите номер задани€: ");
		scanf("%d", &n);

		switch (n)
		{
		case 1:
		{
			/*1. ¬вести вещественные числа. —оздать из них массив.
			ќпределить индекс второго положительного элемента массива.*/
			int *arr = NULL, len, minN = -20, maxN = 50;
			printf("¬ведите длину массива: ");
			scanf("%d", &len);
			arr = (int*)calloc(len, sizeof(int));
			if (arr == NULL)
			{
				printf("Not enough memory.\n");
				exit(0);
			}
			else
			{
				fillArray(arr, len, minN, maxN);
				printArray(arr, len);
				printf("»ндекс второго положтельного элемента массива: %d\n", SearchSecondPositiveElement(arr, len));
			}
			free(arr);

			system("pause");
			system("cls");
		}break;


		}break;

		}

	} while (n != 0);

}