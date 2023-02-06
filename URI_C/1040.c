#include <stdio.h>

int main()
{

    //variaveis
    double nota1, nota2, nota3, nota4, media, notaexame;
    //Entrada de dados
    scanf("%lf%lf%lf%lf", &nota1, &nota2, &nota3, &nota4);
    //Processamento
    media = (nota1 * 2 + nota2 * 3 + nota3 * 4 + nota4 * 1) / (2 + 3 + 4 + 1);
    printf("Media: %.1f\n", media);

    if (media >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (media >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &notaexame);
        printf("Nota do exame: %.1f\n", notaexame);
        
        if ((notaexame + media) / 2 > 5)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (notaexame + media) / 2);
     }
     else
    {
         printf("Aluno reprovado.\n");
    }

    return 0;
}
