#include <locale.h>
#include <stdio.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int mas_choice;
	float rdm;
	printf("������� ������ ���������� �������\n1-��������� ������� ���������� ����������\n2-���� ������� � ����������\n");

	while (scanf_s("%d", &mas_choice) != 1 || mas_choice != 1 && mas_choice != 2)//�������� �� ���� ������� ���������� ������� 
	{
		printf("�������\n������� ������\n");
		rewind(stdin);
	}

	int n;
	int mas[100];
	int rnd;
	printf("������� ����������� ��������� � �������:\n");
	while (scanf_s("%d", &n) != 1 || n > 100)//�������� �� ����
	{
		printf("�������� ��������\n������� ������\n"); 
		rewind(stdin);
	}
	for (int i = 0; i < n; i++)  //������� ���������� �������
	{
		if (mas_choice == 1)
		{
			rnd = rand()+(-10000);
			mas[i] = rnd;
		}
		else
		{
			printf("�%d ", i + 1);
			scanf_s("%d", &mas[i]);
		}
	}
	for (int i = 0; i < n; i++) 
	{
		printf("%d\t", mas[i]);
	}


	int frst_min = mas[0];          //���������� ������������ �������� � ��� �����(������=�����-1)
	int ind_min;
	for (int i = 1; i < n; i++)
	{
		if (frst_min > mas[i])
		{
			frst_min = mas[i];
			ind_min = i;
		}
	}
	printf("\n����������� ��������:%d\n", frst_min);
	printf("\n����� ������� ������������:%d\n", ind_min + 1);


	int cnt_v = ind_min;
	for (int cnt = 0; cnt < cnt_v; cnt++)//�������� ���������
	{
		for (int i = ind_min - 1; i < n - 1; i++)
		{
			mas[i] = mas[i + 1];
		}
		n--;
		ind_min--;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d\t", mas[i]);
	}

	return 0;
}