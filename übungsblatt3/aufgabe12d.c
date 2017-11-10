#include <stdio.h>

int main()
{
    int i = 999;
    printf("Bitte ganze Zahl zwischen -10 und 10 eingeben.\n");
    if ((1 == scanf("%d", &i)) && i >= -10 && i <= 10) {
        printf("Eingabe gueltig.\n");
        return 0;
    }
    printf("Eingabe ungueltig.\n");
    return 0;
}
