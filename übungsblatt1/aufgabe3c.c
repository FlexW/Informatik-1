#include <stdio.h>

int main(int argc, char** argv)
{
    printf("%d\n%s", argc - 1, argv[0]);
    return 0;
}
