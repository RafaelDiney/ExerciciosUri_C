#include <stdio.h>

int main()
{
    //Variaveis
    double R;
    //Entrada de dados
    scanf("%lf", &R);
    //Saída de dados
    printf("VOLUME = %.3lf\n", ((4/3.0)*3.14159* R * R * R));

    return 0;
}