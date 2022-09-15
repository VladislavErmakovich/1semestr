#include <stdio.h>

int strcnt(char* s1, char* s2)                       //функция для проверки вводимой страны к данным странам
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        i++;
    }
    return !(s1[i] - s2[i]);
}

int main()
{
    printf("Countries:\nAfghanistan\nAlbania\nAlgeria\nEgypt\nBolivia\nBrazil\nUSA\nCanada\nAustralia\n");
    printf("Enter country:\n");
    char strn[62];
    gets(strn); //массивдля ввода страны

    if (strcnt(strn, "Afghanistan"))
        printf("Eurasia");

    if (strcnt(strn, "Albania"))
        printf("Eurasia");

    if (strcnt(strn, "Algeria"))
        printf("Africa");

    if (strcnt(strn, "Egypt"))
        printf("Africa");

    if (strcnt(strn, "Bolivia"))
        printf("South America");

    if (strcnt(strn, "Brazil"))
        printf("South America");

    if (strcnt(strn, "USA"))
        printf("Nourth America");

    if (strcnt(strn, "Canada"))
        printf("Nourth America");

    if (strcnt(strn, "Australia"))
        printf("Australia");
    return 0;
}