#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c = getchar();
    if (c < 0 || c > 127)
        return 1;

    printf("%c", c - 1);
    return 0;
}
