#include <conio.h>
#include <stdio.h>
#include <locale.h>
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "rus");
    printf("3.Отсортировать методом Хоара массив строк по убыванию длины строки\n");
    char** str = (char**)malloc(argc * (sizeof(char*)));
    for (int i = 0; i < argc; i++)
    {
        *(str + i) = (char*)malloc(len(argv, i) * sizeof(char));
    }
    copy_mas(argv, str, argc);
    delete_first_string(str, argc);
    argc--;
    if (argc <= 2)
    {
        printf("Мало количесвто строк, возобновите программу\n");
    }
    str = (char**)realloc(str, argc * (sizeof(char*)));
    if (argc > 2)
    {
        printf("Массив до сортировки:\n");
        print_strs(str, argc);
        int* mas = (int*)calloc(argc, sizeof(int));
      vvod_mas(mas,  str, argc);
       print_mas(mas,  argc);
       quick_sort(mas, argc, str);
       print_mas(mas, argc);
        printf("Массив после сортировки:\n");
       print_strs(str, argc);
    }
    
  
}