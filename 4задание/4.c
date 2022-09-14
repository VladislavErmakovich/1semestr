#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "");
	char* strana[20];                         //массив для ввод страны
	printf("Следующие континенты:\nЕвразия(1)\nАфрика(2)\nСевверная Америка(3)\nЮжная Америка(4)\nАвстралия(5)\n");
	printf("Введите старану:");
	gets(strana);
	int a;                                    //номер континета
	printf("Укажите номер континента:\n");
	scanf_s("%d", &a);
	switch (a)

	{
	 case 1:
		if (a == 1)
		{
			printf("Евразия");                        //ввод номера континета и ввывод
		}
			break;
	 case 2:
		if (a == 2)
		{
			printf("Африка");
		}
		break;
	 case 3:
		 if (a == 3)
		 {
			 printf("Севверная Америка");
		 }
		 break;
	 case 4:
		 if (a == 4)
		 {
			 printf("Южная Америка");
		 }
		 break;
	 case 5:
		 if (a == 5)
		 {
			 printf("Австралия");
		 }
		 break;
	 default:
		 printf("Неверное указание континента или неправильный ввод страны");
		}
}
