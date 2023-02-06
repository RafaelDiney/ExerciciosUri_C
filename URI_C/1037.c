#include <stdio.h>

int main()
{
    //Variaveis
    double n;
    //Entrada de dados
    scanf("%lf", &n);
    //Processamento
    if (25 >= n && n >= 0)
    {
        printf("Intervalo [0,25]\n");

    }
    else if ( n > 25.0 && n <= 50.0)
    {

        printf("Intervalo (25,50]\n");

    }
    else if ( n > 50.0 && n <= 75.0)
    {

        printf("Intervalo (50,75]\n");

    }
    else if ( n > 75.0 && n <= 100.0)
    {

        printf("Intervalo (75,100]\n");

    }
    else if ( n > 100.0 || n < 0)
    {

        printf("Fora de intervalo\n");

    }
    return 0;
}