#include <stdio.h>

int main()
{
    //Variaveis
    int hora_ini, min_ini, hora_final, min_final, hora, min;
    //Entrada de dados
    scanf("%d%d%d%d",&hora_ini, &min_ini, &hora_final, &min_final);
    //Processamento
    if(hora_ini == hora_final)
    {

        if(min_final == min_ini)
        {
            hora = 24;
            min = 0;
        }
        else if (min_ini < min_final)
        {
            hora = 0;
            min = min_final - min_ini;
        }
        else
        {
            hora = (24 - hora_ini) + hora_final;
            min = (60 - min_ini) + min_final;
        }

    }
    else if(hora_ini < hora_final)
    {
        hora = hora_final - hora_ini;
        if (min_ini < min_final)
        {
            min = min_final - min_ini;
        }
        else if(min_ini > min_final)
        {
            min = (60 - min_ini) + min_final;
        }
        else
        {
            min = 0;
        }
        if(hora == 1 && min < 60){
            hora = 0;
        }
    }
    else if(hora_ini > hora_final)
    {
        hora = (24 - hora_ini) + hora_final;
        if (min_ini < min_final)
        {
            min = min_final - min_ini;
        }
        else if(min_ini > min_final)
        {
            min = (60 - min_ini) + min_final;
        }
        else
        {
            min = 0;
        }

    }

    //Saída de dados
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, min);





    return 0;
}