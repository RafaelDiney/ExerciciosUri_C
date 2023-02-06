#include <stdio.h>
 
int main() {
    
    //Declarar variaveis
    int codigo, quantidade;
    //Entrada de dados
    scanf("%d%d", &codigo, &quantidade);
    //Processamento e saídas
    if (codigo == 1){
        printf("Total: R$ %.2f", (quantidade * 4.00));
    }
    else if (codigo == 2){
        printf("Total: R$ %.2f", (quantidade * 4.50));
    }
    else if (codigo == 3){
        printf("Total: R$ %.2f", (quantidade * 5.00));
    }
    else if (codigo == 4){
        printf("Total: R$ %.2f", (quantidade * 2.00));
    }
    else if (codigo == 5){
        printf("Total: R$ %.2f", (quantidade * 1.50));
    }
    
    return 0;
}