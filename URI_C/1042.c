#include<stdio.h>
int main()

{
    int vetor[3],i,maior=1,menor=1,meio=1;

    for (i=0; i<3; i++)
    {   
        scanf("%d",&vetor[i]);
        if(vetor[i]<menor)
        {
            menor = vetor[i];
        }
        if(vetor[i]>maior)
        {
            maior = vetor[i];
        }
    }

    for (i=0; i<3; i++)
    {
        if(vetor[i]>menor && vetor[i]<maior)
        {
            meio=vetor[i];
        }
    }
    printf("%d\n", menor); 
    printf("%d\n", meio);
    printf("%d\n", maior);  
    printf("\n%d\n", vetor[0]); 
    printf("%d\n", vetor[1]);
    printf("%d\n", vetor[2]); 

    return 0;
}