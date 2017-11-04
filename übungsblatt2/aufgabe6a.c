#include <stdio.h>
#include <ctype.h>

int main()
{
    int res1 = 0, res = 0;
    char x, y;
    scanf("%c%c", &x, &y);
    res = isdigit(x);
    res1 = isdigit(y);

    /*
      Funktioniert zwar aber es ist nicht festgelegt das isdigit() bei Erfolg
      immer 2048 zurück gibt.
      Das Programm ist also zum scheitern verurteilt.
    */
    printf("%d\n", (res * res1) / (2048 * 2048));
    return 0;
}
