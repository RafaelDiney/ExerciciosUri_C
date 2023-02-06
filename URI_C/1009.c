#include <stdio.h>
int main()
{
    //Variaveis
    char nome;
    double salario, total_vendas;
    //Entrada de dados
    scanf("%s", &nome);
    scanf("%lf%lf",&salario, &total_vendas);
    //Saída de dados
    printf("TOTAL = R$ %.2f\n", salario + (total_vendas*0.15));
    
    return 0;
}
