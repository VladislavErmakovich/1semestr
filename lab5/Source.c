#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<malloc.h>
#include"function.h"
#include<stdlib.h>

int main()
{
	setlocale(LC_ALL,"rus");
	srand(time(NULL));
	printf("1.��������� ������ � ����������.\n������� ������ k-�� ������� (��������, � ������� 1 2 3 4 5 6 7 8 9 ��� �������� ������� 3-�� �������� ������ ���������� 1 2 4 5 7 8).");
	printf("\n������� ���������� ��������� � �������:\nN= ");
	int n=0;
	int* mas1;
	int k;
	erorN(&n);
	mas1 = memory1(&n);
	input_mas1(&n, mas1);
	print_mas1(&n, mas1);
	erorK(&k,&n);
	delete_k(&n, &k, &mas1);
	print_mas1(&n, mas1);
	/*free(mas1);*/
	
	/*printf("\n\n2.� ��������� ������� (���������� ����� � ������ ����� ���� ���������, ��������� ����� - -100.)\n������� ������ k-� ������\n");
	printf("������� ���������� �����:\nN= ");
	erorN(&n);*/
	/*int** mas2 = iput_mas2(&n);
	print_mas2(&n, mas2);
	erorK(&k, &n);
	delet_k_row(&n,mas2 ,&k);
	print_mas2(&n, mas2);																																								
																																														
																																														
	freemas(&n, mas2);
	printf("\n3. � ������� �������� NxM ������� ��� �������� �� ������� ���������\n\n");*/
	int m;
	printf("\n������� ���������� �����:\nN= ");
	erorN(&n);
	printf("\n������� ���������� ��������:\n�= ");
	erorM(&m);
	int** mas3;
	mas3 = memory3(&n, &m);
	input_mas3(&n, &m, mas3);
	print(&n, &m, mas3);
	delete_diagonal(&n, &m, mas3);
	print(&n, &m, mas3);
	/*freemas(&n, mas3);*/

	return 0;
}
