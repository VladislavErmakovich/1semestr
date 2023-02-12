#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void copy_mas(char** argv, char** str, int argc)
{
    for (int i = 0; i < argc; i++)
        for (int j = 0; j < len(argv, i); j++)
            *(*(str + i) + j) = *(*(argv + i) + j);
}

void print_strs(char** str, int argc)
{
    for (int i = 0; i < argc; i++)
        printf("%s\n", *(str + i));
}

void delete_first_string(char** str, int argc)//lab8.exe
{
    for (int i = 0; i < argc - 1; i++)
    {
        *(str + i) = *(str + i + 1);
    }
}

int len(char** str, int position_string)
{
    int cnt = 0, i = 0;
    while (*(*(str + position_string) + i) != '\0')
    {
        cnt++;
        i++;
    }
    return cnt+1;
}

void vvod_mas(int* mas, char** str, int argc)
{
    for (int i = 0; i < argc; i++)
    {
        mas[i] = len(str, i);
    }
}

void print_mas(int* mas, int argc)
{
    for (int i = 0; i < argc; i++)
    {
        printf("%d\t", mas[i]);
    }
    printf("\n");
}

void swap_strok(char** str, int a, int b)
{
    char const *tmp = *(str + a);
    *(str + a) = *(str + b);
    *(str + b) = tmp;
}


void quick_sort(int* mas, int argc, char** str)
{
    int size = argc;
    int k = 0;
    int c = mas[(int)(argc / 2)];
        int tmp=0;
    do {
        while (mas[k] > c)k++;
        while (mas[argc] < c)argc--;
        if (k <= argc)
        {
            tmp = mas[argc];
            mas[argc] = mas[k];
            mas[k] = tmp;
            swap_strok(str,argc,k);
            k++;
            argc--;
        }

    } while (k < argc);
        if(argc > 0) quick_sort(mas, argc, str);
        if(size > k) quick_sort(mas + k, size - k, str-k);
}

//void sort_strok(int* mas, char** str, int argc)
//{
//    for (int i = 0; i < argc; i++)
//    {
//        if(len())
//    }
//}