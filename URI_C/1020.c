#include <stdio.h>
int main ()
{
    //variaveis 
    unsigned int idade, resto, anos, meses, dias;
    //Entrada de dados
    scanf("%u", &idade);
    //Processamento
    anos = idade / 365;
    resto = idade % 365;

    meses = resto / 30;
    resto = resto % 30;

    dias = resto % 30;
    //Saída de dados
    printf("%u ano(s)\n", anos);
    printf("%u mes(es)\n", meses);
    printf("%u dia(s)\n", dias);
    return 0;

}