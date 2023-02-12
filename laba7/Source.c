#include <stdio.h>
#include <locale.h>
#include<stdlib.h>
#include "function.h"
#include <windows.h>
int main()
{
	setlocale(LC_ALL, "rus");
	void (*vbr)()=NULL;
	int restart=1,task;
	while (restart)
	{
		choose_task(&task);
		if (task==1)
			vbr = main_1;
		else
			vbr = main_2;
		vbr();
		reset(&restart);
	}
	return 0;
}