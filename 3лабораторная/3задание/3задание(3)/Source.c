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
	
	printf("������� ���������� ��������� n:\n");
	while (scanf_s("%d", &n) != 1 || n > 100)  //�������� ��� ����� ������� �������
	{
		printf("�������� ��������\n������� ������\n");
		rewind(stdin);
	}

	for (int i = 0; i < n; i++)   //���� ��� ����� ��������� �������� ��������� ������� ��� �������
	{
		if (mas_choice == 1)
		{
			rdm = rand()+(-10000);
			mas[i] = rdm;
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

	int max_cnt = 0;
	int ind_max_cnt = 0;
	int cnt=0;
	for (int i = 0; i < n; i++)  //���� ��� ��������, ������� ��� ����������� �������� ��������
	{
		cnt = 0;
		if (mas[i] % 2 != 0) 
		{
			for (int j = 0; j < n; j++)
			{
				if (mas[i]==mas[j])
				{
					cnt++;
				}
			}
			if (cnt>max_cnt)
			{
				max_cnt = cnt;
				ind_max_cnt = i;
			}
		}
		
	}
	if (max_cnt == 1)
	{
		printf("\n��� ������");
	}
	else 
	{
		printf("\n�������� ����� �������������� ��������� �������� �����:\n%d", mas[ind_max_cnt]);
	}
	return 0;
}