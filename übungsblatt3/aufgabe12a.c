#include <stdio.h>

int main()
{
    int i = 0;
    printf("Bitte Integer eingeben.\n");
    if (1 == scanf("%d", &i)) {
        printf("Die Eingabe war gueltig.\n");
        return 0;
    }
    printf("Die Eingabe war nicht gueltig.\n");
    return 0;
}
