#include <stdio.h>
#include <math.h>

double calc_circumference_square(double length, double width)
{
    return length * width;
}

int main(void)
{
    double length, width;
    scanf("%lf %lf", &length, &width);
    printf("Der Umfang eines Rechtecks mit Länge %f und Breite %f ist %f",
           length,
           width,
           calc_circumference_square(length, width));
    return 0;
}
