#include <stdio.h>

int comp(int x, int y)
{
    int k = 0;
    for (; x + 1 > y; k++) {
        x = x - y;
    }
    return k;
}

int main(void)
{
    int x, y;
    printf("Bitte geben Sie zwei positive ganze Zahlen ein\n");
    printf("(getrennt durch ein Leerzeichen):\n");
    scanf("%i %i", &x, &y);
    printf("%d\n", comp(x, y));
    return 0;
}
