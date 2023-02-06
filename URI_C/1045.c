#include <stdio.h>

int main()
{
    float x, A, B, C;

    scanf("%f%f%f", &A, &B, &C);
    if (A < B){ x = A; A = B; B = x; } 
    if (B < C){ x = B; B = C; C = x; } 
    if (A < B){ x = A; A = B; B = x; }
    
    if (A >= (B + C)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if ((A * A) == ((B * B) + (C * C)))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if ((A * A) > ((B * B) + (C * C)))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if ((A * A) < ((B * B) + (C * C)))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (A == B && B == C && A == C)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (A == B || B == C || A == C)
            {
                printf("TRIANGULO ISOSCELES\n");
            }
    }

    return 0;
}