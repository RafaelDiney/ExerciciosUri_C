#include <stdio.h>

int main()
{
    float A,B,C,perimetro,area;

    scanf("%f%f%f",&A,&B,&C);

    if( B+C > A && A > B-C){
        perimetro = A + B + C;
        printf("Perimetro = %.1f\n", perimetro);
    }
    else {
        area = ((A+B)*C)/2;
        printf("Area = %.1f\n", area);
    }
    return 0;

}