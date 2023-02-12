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
	printf("1.Заполнить массив с клавиатуры.\nУдалить каждый k-ый элемент (например, в массиве 1 2 3 4 5 6 7 8 9 при удалении каждого 3-го элемента должно получиться 1 2 4 5 7 8).");
	printf("\nВведите количество элементов в массиве:\nN= ");
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
	
	/*printf("\n\n2.В двумерном массиве (количество чисел в строке может быть различным, последнее число - -100.)\nудалить каждую k-ю строку\n");
	printf("Введите количество строк:\nN= ");
	erorN(&n);*/
	/*int** mas2 = iput_mas2(&n);
	print_mas2(&n, mas2);
	erorK(&k, &n);
	delet_k_row(&n,mas2 ,&k);
	print_mas2(&n, mas2);																																								
																																														
																																														
	freemas(&n, mas2);
	printf("\n3. В матрице размером NxM удалить все элементы на главной диагонали\n\n");*/
	int m;
	printf("\nВведите количество строк:\nN= ");
	erorN(&n);
	printf("\nВведите количество столбцов:\nМ= ");
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
