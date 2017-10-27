#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
{
    double d = sqrt((double)((argc - 1) * 2));
    printf("%f\n", d);
    return 0;
}
