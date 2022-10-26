#include<locale.h>
#include<stdio.h>
#include<time.h>

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
   int mas_choice;
   printf("В квадратной матрице размером NxN найти сумму элементов в 3-ой области\n\n");
   printf("Введите способ выполнения\n1-Случайное значение\n2-Ввод значений с клавиатуры\n");
   while (scanf_s("%d", &mas_choice) != 1 || mas_choice != 1 && mas_choice != 2 || getchar() != '\n')
   {
	   printf("Неверное значение\nВведите заново\n");
	   rewind(stdin);
   }

   int rnd;
   int mas[100][100];
   int n;
   printf("Введите размер массива\n");
   printf("n=");
   while (scanf_s("%d", &n) != 1 || n > 100 || n < 1 || getchar() != '\n')
   {
	   printf("Неверно\nВведите заново\n");
	   rewind(stdin);
   }

		   if (mas_choice == 1)
		   {
			   mas_random(mas[n][n]);
		   }
		   else
		   {
			   mas_cl(mas[n][n]);
		   }
	
		   printmas(mas[n][n]);

   int sum = 0;
   for (int i = n/2; i <= n-1; i++)
   {
	   for (int j = 0; j <= (n-1)/2; j++)
	   {
		   sum += mas[i][j];
	   }
   }
   printf("\nСумма:\n%d", sum);
	return 0;
}
int mas_random(int mas[100][100])
{
	int rnd;
	int n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			rnd = rand() + (-10000);
			mas[i][j] = rnd;
		}
	}
}
int mas_cl(int mas[100][100])
{
	int n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("mas[%d][%d]= ", i + 1, j + 1);
			scanf_s("%d", &mas[i][j]);
		}
	}
}
int printmas(int mas[100][100])
{
	printf("Массив:\n");
	int n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d\t", mas[i][j]);
		}
		printf("\n");
	}
}