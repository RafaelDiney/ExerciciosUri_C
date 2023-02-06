#include <stdio.h>

int main ()
{
    //Variaveis 
    unsigned int nota100, nota50, nota20, nota10, nota, moeda,
    nota5, nota2 , moeda1, moeda50, moeda25, moeda10, moeda5, moeda01;
    double saque;
    //Entrada de dados
    scanf("%lf", &saque);
    //Processamento 

    //Valor em Notas e em moedas
    nota = saque; 
    moeda = saque * 100 - nota * 100;
    
    nota100 = nota / 100;
    nota50 = (nota % 100) / 50;
    nota20 = ((nota % 100) % 50) / 20;
    nota10 = (((nota % 100) % 50) % 20) / 10;
    nota5 = ((((nota % 100) % 50) % 20) % 10) / 5;
    nota2 = (((((nota % 100) % 50) % 20) % 10) % 5) / 2;
    //Moedas   

    moeda1 = ((((((nota % 100) % 50) % 20) % 10) % 5) % 2) / 1;
    moeda50 = moeda / 50;
    moeda25 = (moeda % 50) / 25;
    moeda10 = ((moeda % 50) % 25) / 10;
    moeda5 = (((moeda % 50) % 25) % 10) / 5;
    moeda01 = ((((moeda % 50) % 25) % 10) % 5) / 1;


    //Saída de dados
    printf("NOTAS:\n");
    printf("%u nota(s) de R$ 100.00\n", nota100);
    printf("%u nota(s) de R$ 50.00\n", nota50);
    printf("%u nota(s) de R$ 20.00\n", nota20);
    printf("%u nota(s) de R$ 10.00\n", nota10);
    printf("%u nota(s) de R$ 5.00\n", nota5);
    printf("%u nota(s) de R$ 2.00\n", nota2);
    printf("MOEDAS:\n");
    printf("%u moeda(s) de R$ 1.00\n", moeda1);
    printf("%u moeda(s) de R$ 0.50\n", moeda50);
    printf("%u moeda(s) de R$ 0.25\n", moeda25);
    printf("%u moeda(s) de R$ 0.10\n", moeda10);
    printf("%u moeda(s) de R$ 0.05\n", moeda5);
    printf("%u moeda(s) de R$ 0.01\n", moeda01);



    return 0;
}