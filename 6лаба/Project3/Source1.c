#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<malloc.h>
#include"function.h"
#include<stdlib.h>

int main()
{
	int bv=1;
	do {
		clock_t t1 = 0, t2 = 0, t3 = 0;
		setlocale(LC_ALL, "rus");
		srand(time(NULL));
		printf("1.� ���������� ������� ��������� ���������� �������� ��������� ������� �������\n");
		printf("\n������� ���������� ��������� � �������:\nN= ");
		int n = 0;
		int* mas1;
		erorN(&n);
		mas1 = memory1(&n);
		int* mas11;
		mas11 = memory1(&n);
		printf("\n��� �� ������ ��������� ������?\n1-������(������ ������)\n2-������ ������\n\n");
		int v, v1, v2;
		v = choiceV(1, 2);
		if (v == 1)
		{
			input_mas1(&n, mas1);
			input_mas11(&n, mas1, mas11);
		}
		else
		{
			badcase(&n, mas1);
		}
		printf("\n�������� ������?\n1-��\n2-���\n\n");
		v1 = choiceV(1, 2);
		if (v1 == 1)
		{
			print_mas1(&n, mas1);
		}
		input_mas11(&n, mas1, mas11);
		int* mas_dop;
		int size;
		sizemas(mas1, &n, &size);
		mas_dop = memory(&size);
		input_masdop(&size, mas_dop, &n, mas1);
		printf("\n�������� �� �����, ������ ���� �������������?\n1-��\n2-���\n\n");
		v2 = choiceV(1, 2);
		if (v2 == 1)
		{
			print_masdop(&size, mas_dop);
		}
		int start = 0;
		int end = size - 1;
		t1 = (long)clock();
		mergesort(mas_dop, start, end);
		returnmas(&size, mas_dop, &n, mas1);
		t2 = (long)clock();
		bublesort(&n, mas11);
		t3 = (long)clock();
		if (v2 == 1)
		{
			print_masdop(&size, mas_dop);
		}
		//returnmas(&size, mas_dop, &n, mas1);
		if (v1 == 1)
		{
			printf("\n�������");
			print_mas1(&n, mas1);
			printf("\n������");
			print_mas11(&n, mas11);
		}
		printf("\n����� ����������: %li �.�.", t2 - t1);
		printf("\n����� ����� ���������� %li �.�.", t3 - t2);
		free(mas1);
		free(mas11);
		free(mas_dop);
		printf("\n�������� �� ����������?\n1-��\n2-���\n");
		bv=choiceV(1, 2);
	} while (bv == 1);
	return 0;
}