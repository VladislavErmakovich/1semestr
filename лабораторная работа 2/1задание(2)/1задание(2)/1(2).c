#include <locale.h>
#include <stdio.h>
int main()
{
	setlocale(LC_ALL, "");
	 int count = 0;               //�������, ������� ����� ����������� ��������
	for (int a=1;a<=9;a++)
		for(int b=0;b<=9;b++)
			if (a* a + b * b == 3 * a * b + 1 && 10 * a + b == 7 * (a + b) + 6)  //�������� ������� ����� ������
			{                                                                    //�� �������� ������ ��������� 83
				printf("%d\n", 10*a+b );
				count=count+1;
            }
	
	       if (count==0)
           {
		      printf("������ ����� ���\n");
	       }
	return 0;
}