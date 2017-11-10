#include <stdio.h>

int main()
{
    int i = -1;
    char c = -1;
    printf("Bitte positive ganze Zahl unmittelbar gefolgt von höchstens einem \
Kleinbuchstaben eingeben.\n");
    if ((2 == scanf("%i%c", &i, &c)) && c <= 122 && c >= 97 && i > 0) {
        printf("Eingabe gueltig.\n");
        return 0;
    }
    printf("Eingabe ungueltig.\n");
    return 0;
}
