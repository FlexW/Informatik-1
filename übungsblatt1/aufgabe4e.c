#include <stdio.h>

double msec_to_hour(int msec)
{
    if (msec < 0)
        return -1;
    return (double)msec / 3600000.0;
}

int main(void)
{
    double hours = 0;
    int msec = 0;

    int ret = scanf("%d", &msec);
    if (ret == EOF || ret != 1)
        return 1;

    hours = msec_to_hour(msec);
    if (hours < 0) {
        printf("Input to large or small\n");
        return 1;
    }
    printf("Hours: %f\n", hours);

   return 0;
}
