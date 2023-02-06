#include <stdio.h>

int main()
{
    //Variaveis
    int produto1, produto2, unidade1, unidade2;
    float preco1, preco2;
    //Entrada de dados
    scanf("%d%d%f", &produto1, &unidade1, &preco1);
    scanf("%d%d%f", &produto2, &unidade2, &preco2);
    //Saída
    printf("VALOR A PAGAR: R$ %.2f\n", ((unidade1 * preco1) + (unidade2 * preco2)));



    return 0;
}