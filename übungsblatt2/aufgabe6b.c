#include <stdio.h>
#include <ctype.h>

int main()
{
    char c = 0;
    scanf("%c", &c);
    printf("%c\n", tolower(c));
    return 0;
}
