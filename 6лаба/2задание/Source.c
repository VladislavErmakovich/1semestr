#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<time.h>

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    printf("2.В матрице размером NxM выполнить сортировку четных по номеру столбцов по убыванию суммы элементов методом Хоара\n\n");
    int m, n;
    printf("Введите количество строк N:\n");
    n = erorPeremen(1, 10);
    printf("Введите количество солбцов M:\n");
    m = erorPeremen(1, 100);
    int** mas = massive2Init(n + 1, m + m / 2);
    ranInputMas(mas, n, m);
    printf("\nВыводить массив с характеристикой или без?\n1-Да\n2-Нет\n");
        int v;
    v = erorPeremen(1, 2);
    if (v == 1)
    {
        massive2Show(mas, n + 1, m);
    }
    else
    {
        massive2Show(mas, n, m);
    }
  
    for (int i = 0, j = 1; i < m / 2; i++, j += 2)
    {
        for (int i0 = 0; i0 <= n; i0++)
            mas[i0][i + m] = mas[i0][j];
    }
    quickSort(mas, m, m + m / 2 - 1, n);
    for (int i = 0, j = 1; i < m / 2; i++, j += 2)
    {
        for (int i0 = 0; i0 <= n; i0++)
            mas[i0][j] = mas[i0][i + m];
    }
    if (v == 1)
    {
        massive2Show(mas, n + 1, m);
    }
    else
    {
        massive2Show(mas, n, m);
    } 
    freeMas(mas, n);
}