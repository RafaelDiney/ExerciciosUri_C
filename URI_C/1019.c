#include <stdio.h>
int main()
{

    //Variaveis
    unsigned int tempo_total, hora, minuto, segundos, resto;                                                          
    //Entrada de dados
    scanf("%u", &tempo_total);

    //Processamento
    hora = tempo_total / 3600;
    resto = tempo_total % 3600;
    minuto = resto / 60;
    segundos = resto % 60;

    //Saída de dados
    printf("%u: %u: %u\n", hora, minuto, segundos);

    return 0;
}
