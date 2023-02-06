#include <stdio.h>
int main()
{
    //Variaveis
    double A, B, C;
    //Entrada de dados 
    scanf("%lf", &A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    //Saída de dados
    printf("TRIANGULO: %.3lf\n",((A*C)/2));
    printf("CIRCULO: %.3lf\n",(3.14159*C*C));
    printf("TRAPEZIO: %.3lf\n",((A+B)*C)/2);
    printf("QUADRADO: %.3lf\n",(B*B));
    printf("RETANGULO: %.3lf\n",(A*B));

    return 0;

}