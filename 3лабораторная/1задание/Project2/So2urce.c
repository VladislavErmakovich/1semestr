#include <locale.h>
#include <stdio.h>
#include <time.h>

int ten_ten();

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int mas_choice;
	float rdm, ten;

	printf("Введите способ выполнения задания\n1-Заполнеие массива случайными элементами\n2-Ввод массива с клавиатуры\n");
	while (scanf_s("%d", &mas_choice) != 1 || mas_choice != 1 && mas_choice != 2)//проверка на ввод способа выполнения задания 
	{
		printf("Неверно\nВведите заново\n");
		rewind(stdin);
	}

	//первое задание 
	int n;
	float mas[100];
	printf("Первое задание:\n");
	
	printf("введите количесвто элементов n:\n");
	while (scanf_s("%d", &n) != 1 || n > 100)    //проверка на ввод размера масства
	{
		printf("Неверное значение\nВведите заново\n");
		rewind(stdin);
	}

	 for ( int i = 0; i < n; i++)
	 {
		 if (mas_choice == 1)
		 {
			 rdm = rand() % 200003+(-10000);
			 ten = ten_ten();
			 mas[i] = rdm / ten;
		 }
		 else
		 {
			 printf("№%d ", i + 1);
			 scanf_s("%f", &mas[i]);
		 }
	 }

	 for (int i = 0 ; i < n; i++)
	 {
		 printf("%f\t", mas[i]);
	 }

	 int A, B;
	 printf("\nУкажите диапазоны:\n");
	 printf("Первый диапозон:\n");
	 while (scanf_s("%d", &A)&& A<= 0 || A >= n ) //проверка
	 {
		 printf("Неверное значение\nВведите заново\n");
		 rewind(stdin);
	 }
	 printf("Второй диапозон:\n");
	 while (scanf_s("%d", &B) && B<=0 || B>n ||B<=A)//проверка
	 {
		 printf("Неверное значение\nВведите заново\n");
		 rewind(stdin);
	 }

	 int cnt = 0;
	 for (int i = A + 1; i <= B - 1; i++)
	 {
		 cnt++;
	 }
	 printf("\nКоличество элементов %d\n\n", cnt);

	 printf("Второе задание:\n");
	 float max=mas[0];
	 int ind_max;
	 for (int i = 1; i < n; i++)
	 {
		 if (max < mas[i])
		 {
			 max = mas[i];
			 ind_max = i;
		 }
	 }
	 printf("максимальное значение:%f\n", max);
	 double sum=0;
	 for (int i = ind_max+1; i <n; i++)
	 {
		 sum = sum + mas[i];
	 }
	 printf("\nСумма равна:%f", sum);

	 return 0;
}

int ten_ten()                   
{
	int a = rand() % 7;
	int num = 10;
	for (int i = 1; i < a; i++)
	{
		num *= 10;
	}
	return num;
}

