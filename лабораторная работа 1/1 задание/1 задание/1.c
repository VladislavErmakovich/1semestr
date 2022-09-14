#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "");
	int x1, y1;                    //координаты вершин
	int x2, y2;
	int x3, y3;
	float a, b, c;                //cтороны треугольника
	float p;                     //периметр
	
	printf("Введите значение первой вершины:\n");
	scanf_s("%d%d", &x1, &y1);
	
	printf("Введите значение второй вершины:\n");
	scanf_s("%d%d", &x2, &y2); 
	
	printf("Введите значение третей вершины:\n");
	scanf_s("%d%d", &x3, &y3);
	
	a = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));        //вычисления
	printf("Значение первой стороны:%f\n",a);
	b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	printf("Значение второй стороны:%f\n", b);
	c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	printf("Значение третей стороны:%f\n", c);
	if (a + b > c && a + c > b && b + c > a)                  //проверка треугольника(неравенство треугольника для всех его сторон)
	{
		p = a + b + c;
		printf("Периметр равен:%f", p);
	}
	else 
	{
		printf("треугольник не существет");
	}
	return 0;
}