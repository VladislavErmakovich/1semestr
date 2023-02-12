#include <stdio.h>
#include <locale.h>
#include<stdlib.h>

void reset(int* reset)
{
	printf("\n1.Вернутся обратно\n0.Выйти\n");
	while (scanf_s("%d", reset) != 1 || *reset != 1 && *reset != 0 || getchar() != '\n')
	{
		printf("Повторите снова(ошибка)\n");
		rewind(stdin);
	}
}
void choose_task(int* choice)
{
	printf("\t\t\t\tПрограмма состоит из двух задач:\n1.Дана строка. Удалить из нее все лишние пробелы. Между словами оставить только по одному пробелу.\n2.Даны два числа a, b и строки S, S0. Вставить b символов строки S в строку S0 начиная с a-го индекса\n");
	while (scanf_s("%d", choice) != 1 || *choice != 1 && *choice != 2 || getchar() != '\n')
	{
		printf("Повторите снова(ошибка)\n\n");
		rewind(stdin);
	}
	system("CLS");
	printf("задача %d:", *choice);
}
void vvod_strok(char** str,int length)
{
	int c ,i = 0;
	printf("Введите строку:\n");
	
		while ((c = getchar()) != EOF && c != '\n')
		{

			*(*str + i) = c;
			i++;
			length++;
			*str = (char*)realloc(*str, length);

		}

		*(*str + i) = '\0';
}

void print_strok(char** string)
{
	printf("\nСтрока:\n");
	for (int i = 0; *(*string + i) != '\0'; i++)
	{
		printf("%c", *(*string + i));
	}
	printf("\n");
}

int len(char** str)
{
	int i = 0, n;
	while (*(*str + i) != '\0')
	{
		i++;
	}

	n = i;
	return n;
}

void delete_probel(char** str, int length)
{
	for (int cnt = 0; cnt < length; cnt++)
	{
		for (int i=0; i <1; i++)
		{
			if (*(*str + i) == ' ')
			{
				for (int j = 0 ; *(*str + j) != '\0'; j++)
				{
					*(*str + j) = *(*str + j + 1);
				}
			}
		}
	}
	
	for (int cnt = 0; cnt < length; cnt++)
	{
		int i = 0;
		for (; *(*str + i) != '\0'; i++)
		{
			if (*(*str + i) == ' ' && *(*str + i + 1) == ' ' && *(*str + i + 1) != '\0')
			{
				for (int j = i; *(*str + j) != '\0'; j++)
				{
					*(*str + j) = *(*str + j + 1);
				}
			}
		}
	}
	printf("\nРезультат:\n");
	for (int i = 0; *(*str + i) != '\0'; i++)
	{
		printf("%c", *(*str + i));
	}
	printf("\n");
}

//if (*(str + i) == ' ' && *(str + i + 1) == ' ' && *(str + i + 1) != '\0')
//{
//	for (int j = i + 1; j < length; j++)
//	{
//		*(str + j) = *(str + j + 1);
//	}
//	cnt++;
//	length--;


int peremen(int min, int max)
{
	int v;
	while (scanf_s("%d", &v) != 1 || v < min || v >max || getchar() != '\n')
	{
		printf("Ошибка\n");
		rewind(stdin);
	}
	return v;
}


void cop_str(char** str, int a, char** dop,int length)
{

	int i=0;
	while (i<a)
	{
		*(*dop + i) = *(*str + i);
		i++;
		length++;
		*dop = (char*)realloc(*dop, length);
	}
	*(*dop + i) = '\0';

	printf("\nЧто копируем из первой строки:\n");
	for (int i = 0; *(*dop + i) != '\0'; i++)
	{
		printf("%c", *(*dop + i));
	}
	printf("\n");
}

void cop_strok(char** str, char** dop, int a,int b, int length)
{
	length = length + b;
	/**str = (char*)realloc(*str, length);
	for (int i = 0; *(*str + i) != '\0'; i++)
	{
		printf("%c", *(*str + i));
	}
	printf("\n");
	printf("%d\n",length);*/
	for (int i = 0; *(*str + i) != '\0'; i++)
	{
		if (i == a - 1)
		{
			for (int cnt = 0; cnt < b; cnt++)
			{
				for (int j = length + 1; j > i; j--)
				{
					*(*str + j) = *(*str + j - 1);
				}
			}
		}
		
	}
	/*for (int i = 0; *(*str + i) != '\0'; i++)
	{
		printf("%c", *(*str + i));
	}*/
	for (int i = 0; *(*str + i) != '\0'; i++)
	{
		if (i == a )
		{
			int d = i;
			for (int j = 0; *(*dop + j) != '\0'; j++)
			{
				*(*str + d) = *(*dop + j);
				d++;
			}
		}
	}
	printf("\nРезультат:\n");
	for (int i = 0; *(*str + i) != '\0'; i++)
	{
		printf("%c", *(*str + i));
	}
}

void main_1()
{
	setlocale(LC_ALL, "rus");
	printf("\nДана строка. Удалить из нее все лишние пробелы. Между словами оставить только по одному пробелу.\n");
	char** str = (char**)malloc(sizeof(char*));
	*str = (char*)malloc(sizeof(char));
	int* length = 1;
	vvod_strok(str, length);
	length = len(str);
	print_strok(str);
	delete_probel(str, length);
	free(str);
}
void main_2()
{
	setlocale(LC_ALL, "rus");
	printf("\nДаны два числа a, b и строки S, S0. Вставить b символов строки S в строку S0 начиная с a-го индекса\n");
	char** str1 = (char**)malloc(sizeof(char*));
	*str1 = (char*)malloc(sizeof(char));
	int length1 = 1;
	char** str2 = (char**)malloc(sizeof(char*));
	*str2 = (char*)malloc(sizeof(char));
	int length2 = 1;
	char** str1_dop = (char**)malloc(sizeof(char*));
	*str1_dop = (char*)malloc(sizeof(char));
	int length3 = 1;
	vvod_strok(str1, length1);
	vvod_strok(str2, length2);
	print_strok(str1);
	print_strok(str2);
	length1 = len(str1);
	length2 = len(str2);
	int len(char** str);
	int a = 0, b = 0;
	printf("\na=");
	a = peremen(1, length2);
	printf("\nb=");
	b = peremen(1, length1);
	cop_str(str1, b, str1_dop, length3);
	cop_strok(str2, str1_dop, a, b, length1);
	free(str1);
	free(str2);
}