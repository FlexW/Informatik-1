#include <stdio.h>

int main()
{
    int i = 0;
    char str[100];
    printf("Bitte maximal zwei ASCII-Zeichen eingeben.\n");
    scanf("%s", str);
    while(str[i] != 0) {
        if (str[i] < 0 && str[i] > 127)
            break;
        i++;
    }
    if (i <= 2) {
        printf("Eingabe gueltig.\n");
        return 0;
    }
    printf("Eingabe ungueltig.\n");
    return 0;
}
