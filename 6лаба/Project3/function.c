#include<stdio.h>
#include<time.h>
#include<malloc.h>

void erorN(int* n)
{
	while (scanf_s("%d", n) != 1 || *n > 10000 || *n <= 1 || getchar() != '\n')
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
		*(mas1 + i) = rand() % 21 - 10;
	}
}

void print_mas1(int* n, int* mas1)
{
	printf("\nМассив:\n");
	for (int i = 0; i < (*n); i++)
	{
		printf("%d\t", *(mas1 + i));
	}
}

void input_mas11(int* n, int* mas1, int* mas11)
{
	for (int i = 0; i < (*n); i++)
	{
		mas11[i] = mas1[i];
	}
}

void sizemas(int* mas1, int* n, int* size)
{
	int k = 0;
	for (int i = 0; i < (*n); i++)
	{
		if (*(mas1 + i) % 2 != 0)
		{
			k++;
		}
	}
	(*size) = k;
}

void input_masdop(int* size, int* mas_dop, int* n, int* mas1)
{
	for (int i = 0, j = 0; j<(*size),i<(*n); i++, j++)
	{
		if (mas1[i] % 2 != 0)
		{
			mas_dop[j] = mas1[i];
		}
		else
		{
			j--;
		}
	}
}

int* memory(int* size)
{
	int* mas_dop;
	mas_dop = (int*)calloc(*(size), sizeof(int));
	return mas_dop;
};

void print_masdop(int* size, int* mas_dop)
{
	printf("\nМассив:\n");
	for (int i = 0; i < (*size); i++)
	{
		printf("%d\t", *(mas_dop + i));
	}
}

void merge(int* mas_dop, int first, int last)
{
	int* mas;
	int left, right, middle;
	mas = (int*)malloc((last - first) * sizeof(int));

	middle = (first + last) / 2;
	left = first;
	right = middle +1 ;

	for (int i = first; i <= last; i++)
	{
		if ((left <= middle) && ((right > last) || (mas_dop[left] < mas_dop[right])))
		{
			*(mas + i - first) = mas_dop[left];
			left++;
		}
		else
		{
			*(mas + i - first) = mas_dop[right];
			right++;
		}
	}

	for (int i = first; i <= last; i++)
	{
		mas_dop[i] = *(mas + i - first);
	}
}

void mergesort(int* mas_dop, int start, int end)
{
	if (start < end)
	{
		mergesort(mas_dop, start, (start + end) / 2);
		mergesort(mas_dop, (start + end) / 2 + 1, end);

		merge(mas_dop, start, end);
	}
}

void returnmas(int* size, int* mas_dop, int* n, int* mas1)
{
	for (int i = 0, j = 0; j < (*size), i < (*n); i++, j++)
	{
		if (mas1[i] % 2 != 0)
		{
			mas1[i] = mas_dop[j];
		}
		else
		{
			j--;
		}
	}
}

int choiceV(int min, int max)
{
	int v;
	while (scanf_s("%d", &v) != 1 || v < min || v >max || getchar() != '\n')
	{
		printf("Ошибка\n");
		rewind(stdin);
	}
	return v;
}

void badcase(int* n, int* mas1)
{
	for (int i = 1; i < (*n)-1; i++)
	{
		mas1[i] = (*n) - 1 - i * 2;
	}
	mas1[0] = (*n)+3;
	mas1[(*n) - 1] =(-1)*mas1[0];
}

void bublesort(int* n, int* mas11)
{
	for(int cnt=0;cnt<(*n)/2;cnt++)
	{
		for (int i = 0; i < (*n); i++)
		{
			for (int j = (*n)-1 ;j >=i; j--)
			{
				if (mas11[i] % 2 != 0 && mas11[j] % 2 != 0 && mas11[j] < mas11[i])
				{
					int t = mas11[j];
					mas11[j] = mas11[i];
					mas11[i] = t;
				}
			}
		}
	}
}

void print_mas11(int* n, int* mas11)
{
	printf("\nМассив:\n");
	for (int i = 0; i < (*n); i++)
	{
		printf("%d\t", *(mas11 + i));
	}
}