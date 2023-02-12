//#include <stdio.h>
//#include <stdlib.h>
//
//int erorPeremen(int min, int max) {
//    int e;
//    while (scanf_s("%d", &e) != 1 || e < min || e > max || getchar() != '\n') {
//        printf("Ошибка, введите заново\n");
//        rewind(stdin);
//    }
//    return e;
//}
//
//int* massiveInit(int m) {
//    int* mas;
//    mas = (int*)calloc(m, sizeof(int));
//    return mas;
//}
//
//int** massive2Init(int n, int m) {
//    int** mas = (int**)calloc(n, sizeof(int*));
//    for (int i = 0; i < n; i++)
//        mas[i] = massiveInit(m);
//    return mas;
//}
//
//
//void massive1Show(int* mas, int m) 
//{
//    for (int i = 0; i < m; i++) 
//    {
//        printf("%d\t", mas[i]);
//    }
//    printf("\n");
//}
//
//
//void massive2Show(int** mas, int n, int m) 
//{
//    printf("\nМассив:\n");
//    for (int i = 0; i < n; i++)
//        massive1Show(mas[i], m);
//}
//
//void ranInputRow(int* mas, int m) {
//    for (int i = 0; i < m; i++)
//        mas[i] = rand() % 21- 10;
//}
//
//int colSum(int** mas, int n, int j) {
//    int sum = 0;
//    for (int i0 = 0; i0 < n; i0++) {
//        sum += mas[i0][j];
//    }
//    return sum;
//}
//
//void ranInputMas(int** mas, int n, int m) {
//    for (int i = 0; i < n; i++) {
//        ranInputRow(mas[i], m);
//    }
//    for (int j = 0; j < m; j++)
//        mas[n][j] = colSum(mas, n, j);
//}
//
//
//
//void freeMas(int** mas, int n)
// {
//    for (int i = 0; i < n; i++)
//        free(mas[i]);
//}
//
//
//void quickSort(int** mas, int n, int m, int N)
//{
//    int  f = n, l = m, tmp, base = mas[N][((l + f) / 2)];
//
//    while (f <= l)
//    {
//        for (; mas[N][f] > base; f++);
//        for (; mas[N][l] < base; l--);
//        if (f <= l)
//        {
//            for (int i = 0; i <= N; i++)
//            {
//                tmp = mas[i][l];
//                mas[i][l] = mas[i][f];
//                mas[i][f] = tmp;
//            }
//            f++;
//            l--;
//        }
//    }
//    if (n < l) quickSort(mas, n, l, N);
//    if (f < m) quickSort(mas, f, m, N);
//}
//
