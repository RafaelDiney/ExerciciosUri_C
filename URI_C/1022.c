#include <stdio.h>

void multiplica(int, int, int, int, int *, int *);
void soma(int, int, int, int, int *, int *);
void subtrai(int, int, int, int, int *, int *);
void dividi(int, int, int, int, int *, int *);
int mdc(int, int);
int mmc(int, int);


int main()
{

    
    int a, b, c, d;
    unsigned qntCasos;
    int denominador, numerador, tmp;
    char oper;

    scanf("%u", &qntCasos);

    while (qntCasos--)
    {

        scanf("%d / %d %c %d / %d", &a, &b, &oper, &c, &d);

        if (oper == '+')
            soma(a, b, c, d, &numerador, &denominador);
        else if (oper == '-')
            subtrai(a, b, c, d, &numerador, &denominador);
        else if (oper == '*')
            multiplica(a, b, c, d, &numerador, &denominador);
        else if (oper == '/')
            dividi(a, b, c, d, &numerador, &denominador);

        tmp = mdc(numerador, denominador);

        if (tmp < 0)
            printf("%d/%d = %d/%d\n", numerador, denominador, -(numerador / tmp), -(denominador / tmp));
        else
            printf("%d/%d = %d/%d\n", numerador, denominador, numerador / tmp, denominador / tmp);
    }
    return 0;
}

void soma(int a, int b, int c, int d, int *numerador, int *denominador)
{

    *numerador = a * d + c * b;
    *denominador = b * d;
}

void subtrai(int a, int b, int c, int d, int *numerador, int *denominador)
{

    *numerador = a * d - c * b;
    *denominador = b * d;
}

void multiplica(int a, int b, int c, int d, int *numerador, int *denominador)
{

    *numerador = a * c;
    *denominador = b * d;
}

void dividi(int a, int b, int c, int d, int *numerador, int *denominador)
{

    *numerador = (a * d);
    *denominador = (c * b);
}

int mdc(int a, int b)
{

    int resto = a % b;

    while (resto != 0)
    {

        a = b;
        b = resto;
        resto = a % b;
    }

    return b;
}

int mmc(int a, int b)
{

    return (a / mdc(a, b)) * b;
}