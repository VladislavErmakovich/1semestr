#include <locale.h>
#include <stdio.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int mas_choice;
	printf("Характеристикой строки целочисленной матрицы назовем сумму ее отрицательных четных элементов.\nПереставляя строки заданной матрицы, расположить их в соответствии с убыванием характеристик.\n\n");
	printf("Введите способ выполнения задания\n1-Заполнеие массива случайными элементами\n2-Ввод массива с клавиатуры\n");
	while (scanf_s("%d", &mas_choice) != 1 || mas_choice != 1 && mas_choice != 2 || getchar() != '\n')
	{
		printf("Неверно\nВведите заново\n");
		rewind(stdin);
	}

	int mas[100][100];
	int m;
	int n;
	printf("Введите размерность массива:\n");
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

	if (mas_choice == 1)
	{
		mas_random(mas[n][m]);
	}
	else
	{
		mas_cl(mas[n][m]);
	}

	printmas(mas[n][m]);

	int mas_row[100];
	for (int cnt = 0; cnt < n; cnt++)
		for (int i = 0; i < n - 1; i++)
		{
			for (int v = i + 1; v < n; v++)
			{
				int sum_row1 = 0;
				int sum_row2 = 0;
				for (int j = 0; j < m; j++)
				{
					if (mas[i][j] < 0 && mas[i][j] % 2 == 0)
					{
						sum_row1 += mas[i][j];
					}
				}

				for (int j = 0; j < m; j++)
				{
					if (mas[i + 1][j] < 0 && mas[i + 1][j] % 2 == 0)
					{
						sum_row2 += mas[i + 1][j];
					}
				}

				if (sum_row1 < sum_row2)
				{
					for (int j = 0; j < m; j++)
					{
						mas_row[j] = mas[i][j];
						mas[i][j] = mas[v][j];
						mas[v][j] = mas_row[j];
					}
				}
			}
		}
	printmas(mas[n][m]);

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