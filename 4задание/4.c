#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "");
	char* strana[20];                         //������ ��� ���� ������
	printf("��������� ����������:\n�������(1)\n������(2)\n��������� �������(3)\n����� �������(4)\n���������(5)\n");
	printf("������� �������:");
	gets(strana);
	int a;                                    //����� ���������
	printf("������� ����� ����������:\n");
	scanf_s("%d", &a);
	switch (a)

	{
	 case 1:
		if (a == 1)
		{
			printf("�������");                        //���� ������ ��������� � ������
		}
			break;
	 case 2:
		if (a == 2)
		{
			printf("������");
		}
		break;
	 case 3:
		 if (a == 3)
		 {
			 printf("��������� �������");
		 }
		 break;
	 case 4:
		 if (a == 4)
		 {
			 printf("����� �������");
		 }
		 break;
	 case 5:
		 if (a == 5)
		 {
			 printf("���������");
		 }
		 break;
	 default:
		 printf("�������� �������� ���������� ��� ������������ ���� ������");
		}
}
