#include <stdio.h>

int main(int argc, char** argv)
{
    if (argc != 3)
        return 1;

    printf("%s %s %s", argv[0], argv[1], argv[2]);
    return 0;
}
