#include <stdio.h>

/*
    Faça uma função que receba dois valores A e B e retorne a soma dos valores no intervalo [A, B]. No
Moodle, insira apenas a sua função, que deve ter a seguinte assinatura:
int soma(int a, int b)
*/

int soma(int a, int b);

int main ()
{
    int a, b, resp;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &a, &b);

    resp = soma(a, b);

    printf("Soma dos valores no intervalo [%d, %d]: %d\n", a, b, resp);


    return 0;
}

int soma(int a, int b)
{
    int resp = 0, i;
    for(i = a; i <= b; i++)
    {
        resp += i; 
    }
    return resp; 
}