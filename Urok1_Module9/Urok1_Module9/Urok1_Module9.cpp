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
		printf("������� ����� �������: ");
		scanf("%d", &n);

		switch (n)
		{
		case 1:
		{
			/*1. ������ ������������ �����. ������� �� ��� ������.
			���������� ������ ������� �������������� �������� �������.*/
			int *arr = NULL, len, minN = -20, maxN = 50;
			printf("������� ����� �������: ");
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
				printf("������ ������� ������������� �������� �������: %d\n", SearchSecondPositiveElement(arr, len));
			}
			free(arr);

			system("pause");
			system("cls");
		}break;


		}break;

		}

	} while (n != 0);

}