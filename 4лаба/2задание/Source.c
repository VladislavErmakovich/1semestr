#include <locale.h>
#include <stdio.h>
#include<time.h>

int main()
{
	setlocale(LC_ALL, "");
	printf("Проверить, все ли строки матрицы содержат хотя бы один отрицательный элемент Если да, то изменить знаки всех элементов матрицы на обратные.\n\n");
	int mas_choice;
	printf("Ведите метод выполнения залднания\n1-Случайное значение элемнтов массива\n2-Ввод значений с клавиатуры\n\n");
	while (scanf_s("%d", &mas_choice) != 1 || mas_choice != 1 && mas_choice != 2 || getchar() != '\n')
	{
		printf("Неверно\nВведите заново\n");
		rewind(stdin);
	}
    
	int n, m;
	printf("Введите размер массива\n");
	printf("n=");
	while (scanf_s("%d", &n) != 1 || n > 100 || n < 1 || getchar() != '\n')
	{
		printf("Неверно\nВведите заново\n");
		rewind(stdin);
	}

	printf("m=");
	while (scanf_s("%d", &m) != 1 || m > 100 || m < 1 || getchar() != '\n')
	{
		printf("Неверно\nВведите заново\n");
		rewind(stdin);
	}

	int mas[100][100];
		if (mas_choice == 1)
		{
			mas_random(mas[n][m]);
		}
		else
		{
			mas_cl(mas[n][m]);
		}
		printmas(mas[n][m]);

	int mas_row_minus[100];
	for (int i = 0; i < n; i++)
	{
		mas_row_minus[i] = 0;
		for (int j = 0; j < m; j++)
		{
			if (mas[i][j] < 0)
			{
				mas_row_minus[i]++;
			}	
		}
	}
	printf("\nКоличество отрицательных чисел в строке:\n");
	for (int i = 0; i < n; i++)
	{
		printf("\n%d", mas_row_minus[i]);
	}
	printf("\n\n");

	int f = 0;
	for (int i = 0; i < n;i++)
	{
		if (mas_row_minus[i] > 0)
		{
			f=f+1;
		}
		else
		{
			f = f - n * m;
		}
	}
	if (f > 0)
	{
		for (int i = 0; i < n; i++)
		{
			for  (int j = 0; j < m; j++)
			{
				mas[i][j] = mas[i][j] * (-1);
			}
		}
		printmas(mas[n][m]);
	}
	else
	{
		printmas(mas[n][m]);
	}
	return 0;
}
int mas_random(int mas[100][100])
{
	int rnd;
	int n, m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			rnd = rand() + (-10000);
			mas[i][j] = rnd;
		}
	}
}
int mas_cl(int mas[100][100])
{
	int n, m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("mas[%d][%d]= ", i + 1, j + 1);
			scanf_s("%d", &mas[i][j]);
		}
	}
}
int printmas(int mas[100][100])
{
	printf("Массив:\n");
	int n, m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d\t", mas[i][j]);
		}
		printf("\n");
	}
}