#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C, MaiorAB;
    //Entrada de dados
    scanf("%d%d%d", &A, &B, &C);
    //Processamento
    MaiorAB = (A + B + abs(A - B))/2;
    printf("%d eh o maior", ((C + MaiorAB + abs (MaiorAB - C))/2));
    return 0;

}