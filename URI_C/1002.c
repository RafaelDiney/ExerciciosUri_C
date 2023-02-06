#include <stdio.h>
#include <math.h>

#define n 3.14159

int main()
{

    double R, A;

    scanf("%lf", &R);

    A = n * pow(R, 2.00);

    printf("A=%.4lf\n", A);

    return 0;
}