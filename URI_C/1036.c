#include <stdio.h>
#include <math.h> 
int main()
{
    //Variaveis
    double A, B, C, delta, raiz1, raiz2, bhaska;
    //Entrada de dados
    scanf("%lf%lf%lf", &A, &B, &C);
    //Processamento

    //Calculando delta
    delta = (B * B) - (4 * A * C);
    
    if (delta < 0 || A == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        raiz1 = (-B + (sqrt(delta))) / (2 * A);
        raiz2 = (-B - (sqrt(delta))) / (2 * A);
        printf("R1 = %.5lf\n", raiz1);
        printf("R2 = %.5lf\n", raiz2);
    }

    return 0;
}