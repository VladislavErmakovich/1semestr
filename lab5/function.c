#include<stdio.h>
#include<time.h>
#include<malloc.h>

void erorN(int* n)
{
	while (scanf_s("%d", n) != 1 || *n>15 || *n <=1|| getchar() != '\n')
	{
		rewind(stdin);
		printf("Неверно значение\nВведите заново\nN= ");
	}
} 

int* memory1(int* n)
{
	int* mas1;
	mas1 = (int*)calloc(*(n), sizeof(int));
	return mas1;
};
void input_mas1(int* n, int* mas1)
{
	for (int i = 0; i < (*n); i++)
	{
			printf("%d- ", i + 1);
			while (scanf_s("%d", &mas1[i]) != 1 || getchar() != '\n')
			{
				printf("Неверное.Введите заново\n");
				rewind(stdin);
			}
	}
}

void print_mas1(int* n, int* mas1)
{
	printf("Массив:\n");
	for (int i = 0; i < *(n); i++)
	{
		printf("%d\t", *(mas1 + i));
	}
}

void erorK(int* k, int* n)
{
	printf("\nКаждый к:\n");
	while (scanf_s("%d", k) != 1 || *k <=1 || getchar() != '\n'|| *k>=*n)
	{
		rewind(stdin);
		printf("Неверно значение\nВведите заново\nk= ");
	}
}

void delete_k(int* n, int* k, int** mas1)
{
	int p = (*n);
	int v = (*k);
	for (int cnt = 0; cnt <(*n)/ (*k); cnt++)
	{
		for (int i = v - 1; i < *(n); i++)
		{
			*(*(mas1) + i) = *(*(mas1) + i + 1);
		}
		v = (v + (*k))-1;
	}
	v = (*k);
	*n = p - p / v;
	*mas1 = (int*)realloc(*mas1, *n * sizeof(int));
}

int iput_mas2(int* n)
{
	int** mas2;
	mas2 = (int**)calloc((*n), sizeof(int*));
	
	for (int i = 0; i < (*n); i++)
	{
		mas2[i] = (int*)calloc(1, sizeof(int*));
		int j = 0;
		printf("Введите элементы в %d-строке\n", i + 1);
		
		while (scanf_s("%d", &mas2[i][j]) && mas2[i][j] != -100)
		{
			j++;
			mas2[i] = (int*)realloc(mas2[i], (j + 1) * sizeof(int));
		}
	}
	return mas2;
}

void print_mas2(int* n, int** mas2)
{
	printf("\nМассив:\n");
	for (int i=0; i < (*n); i++)
	{
		int j = 0;
		while (mas2[i][j] != -100)
		{
			printf("%d\t", mas2[i][j]);
			j++;
		}
		printf("%d\t", mas2[i][j]);
		printf("\n");
	}
}

void delet_k_row(int* n, int** mas2, int* k)
{
	int v = (*k);
	for (int cnt = 0; cnt < (*n) / (*k); cnt++)
	{
		for (int i = v - 1; i < (*n)-1; i++)
		{
			mas2[i] = mas2[i + 1];
		}
		v = v + (*k) - 1;
	}
	v = *k;
	*n = *n - *n / v;
	mas2 = (int**)realloc(mas2, *n * sizeof(int*));
}
	
/*void delete_row(int* row, int*** mas2, int* col, int* k) {
	*k = 2;
	for (int i = 0; i < *row; i++) {
		for (int j = 0; j < *col; j++) {
			if ( *(mas2)[i]  == k) {
				for (int m = k; m < (*row) - 1; m++) {
					for (int n = 0; n < *col; n++) {
						*(mas2)[m] = *(mas2)[m + 1];
					}
				}
			}
			i--;
			(*row)--;
		}
		*mas2 = (int**)realloc(*(mas2), *row * sizeof(int*));
	}
}*/

void** erorM(int* m)
{
	while (scanf_s("%d", m) != 1 ||*m>15|| *m <= 1 || getchar() != '\n')
	{
		rewind(stdin);
		printf("Неверно значение\nВведите заново\nN= ");
	}
}

int** memory3(int* n, int* m)
{
	int** mas3;
	mas3 = (int**)calloc((*n), sizeof(int*));
	for (int i = 0; i < (*n); i++)
	{
		*(mas3+i)= (int*)calloc((*m), sizeof(int)); 
	}
	return mas3;
		
}

void input_mas3(int* n, int* m, int** mas3)
{
	for (int i = 0; i < (*n); i++)
	{
		for (int j = 0; j < (*m); j++)
		{
			mas3[i][j] = rand()%21 - 10;
		}
	}
}

void* print(int* n, int* m, int** mas3)
{
	printf("\nМассив:\n");
	for (int i = 0; i < (*n); i++)
	{
		for (int j = 0; j < (*m); j++)
		{
			printf("%d\t", mas3[i][j]);
		}
		printf("\n");
	}
}

void delete_diagonal(int* n, int* m, int** mas3)
{
	int i, j,k=0;
	if ((*n) == (*m))
	{
		for ( i = 0; i < (*n); i++)
		{
			for ( j = k; j < (*m); j++)
			{
				mas3[i][j] = mas3[i][j + 1];
			}
			k++;
		}
		(*m)--;
			mas3 = (int*)realloc(mas3, *m * sizeof(int));
	}
	else
	{
		printf("\nИзменений не будет\nМассив не правильного размера\n");
	}
}

void freemas(int* n, int** mas2)
{
	for (int i = 0; i < n; i++)
	{
		free(mas2[i]);
	}
	free(mas2);
}





 