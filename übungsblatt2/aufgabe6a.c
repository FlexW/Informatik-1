#include <stdio.h>
#include <ctype.h>

int main()
{
    int res1 = 0, res = 0;
    char x, y;
    scanf("%c%c", &x, &y);
    res = isdigit(x);
    res1 = isdigit(y);
    if (res && res1)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
