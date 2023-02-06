#include <stdio.h>

int main()
{
    //Entrada de dados
    int n, x, y, cont;
    scanf("%d", &n);
    for (cont = 1; cont <= n; cont++)
    {
        scanf("%d%d", &x, &y);
        if (y != 0)
        {
            printf("%.1f\n", (float)x / y);
        }
        else
        {
            printf("divisao impossivel\n");
        }
    }
    return 0;
}