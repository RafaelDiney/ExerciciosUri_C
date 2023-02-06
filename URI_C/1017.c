#include <stdio.h>

int main()
{
    //variaveis
    int tempogasto, velocidade, distancia;
    float litros;
    //Entrada
    scanf("%d%d", &tempogasto, &velocidade);
    //Saída de dados
    printf("%.3f\n", (velocidade * tempogasto / 12.00));
    

    return 0;
}