#include <stdio.h>
int main ()
{
    //Variaveis 
    unsigned int saque, resto, nota100, nota50, nota20, nota10,
    nota5, nota2, nota1;
    //Entrada de dados
    scanf("%u", &saque);
    //Processamento 
    nota100 = saque / 100;
    resto = saque % 100;

    nota50 = resto / 50;
    resto = resto % 50;

    nota20 = resto / 20;
    resto = resto % 20;

    nota10 = resto / 10;
    resto = resto % 10;

    nota5 = resto / 5;
    resto = resto % 5;

    nota2 = resto / 2;
    resto = resto % 2;

    nota1 = resto / 1;
    //Saída de dados
    printf("%u\n", saque);
    printf("%u nota(s) de R$ 100,00\n", nota100);
    printf("%u nota(s) de R$ 50,00\n", nota50);
    printf("%u nota(s) de R$ 20,00\n", nota20);
    printf("%u nota(s) de R$ 10,00\n", nota10);
    printf("%u nota(s) de R$ 5,00\n", nota5);
    printf("%u nota(s) de R$ 2,00\n", nota2);
    printf("%u nota(s) de R$ 1,00\n", nota1);


    return 0;
}