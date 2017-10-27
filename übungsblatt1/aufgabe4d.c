#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int dist;
    int c = getchar();
    if (c < 0 || c > 127)
        return 1;

    dist = abs('A'- c);

    printf("%d", dist);

    return 0;
}
