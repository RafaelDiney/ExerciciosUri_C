#include <stdio.h>

int main()
{
    //Variaveis
    int Distancia_km;
    float combust_gasto, consumo_medio;
    //Entrada de dados
    scanf("%d%f", &Distancia_km, &combust_gasto);
    //Processamento
    consumo_medio = Distancia_km / combust_gasto;
    //Saída de dados
    printf("%.3f km/l\n", consumo_medio);
    
    return 0;
}