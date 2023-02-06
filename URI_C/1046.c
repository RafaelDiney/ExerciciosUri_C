#include <stdio.h>

int main()
{

    //Variaveis
    int hora_inicial, hora_final, manipula;
    //entrada de dados
    scanf("%d%d", &hora_inicial, &hora_final);
    //Processamento
    if (hora_inicial == hora_final)
    {
        manipula = 24;
    }
    else if (hora_inicial < hora_final)
    {
        if (hora_inicial == 0)
        {
            manipula = hora_final;
        }
        else
        {
        manipula = hora_final - hora_inicial;
        }
    }    
    else if (hora_inicial > hora_final)
    {   
    manipula = (24 - hora_inicial) + hora_final;
    }
printf("O JOGO DUROU %d HORA(S)\n", manipula);

return 0;
}