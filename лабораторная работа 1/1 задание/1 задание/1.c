#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "");
	int x1, y1;                    //���������� ������
	int x2, y2;
	int x3, y3;
	float a, b, c;                //c������ ������������
	float p;                     //��������
	
	printf("������� �������� ������ �������:\n");
	scanf_s("%d%d", &x1, &y1);
	
	printf("������� �������� ������ �������:\n");
	scanf_s("%d%d", &x2, &y2); 
	
	printf("������� �������� ������ �������:\n");
	scanf_s("%d%d", &x3, &y3);
	
	a = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));        //����������
	printf("�������� ������ �������:%f\n",a);
	b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	printf("�������� ������ �������:%f\n", b);
	c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	printf("�������� ������ �������:%f\n", c);
	if (a + b > c && a + c > b && b + c > a)                  //�������� ������������(����������� ������������ ��� ���� ��� ������)
	{
		p = a + b + c;
		printf("�������� �����:%f", p);
	}
	else 
	{
		printf("����������� �� ���������");
	}
	return 0;
}