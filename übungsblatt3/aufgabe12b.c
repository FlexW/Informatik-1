#include <stdio.h>

int main()
{
    double d1 = -1.0, d2 = -1.0;
    printf("Bitte zwei nicht negative double Werte eingeben.\n");
    scanf("%lf%lf", &d1, &d2);
    if (d1 > 0 && d2 > 0) {
        printf("Eingabe gueltig.\n");
        return 0;
    }
    printf("Eingabe ungueltig.\n");
    return 0;
}
