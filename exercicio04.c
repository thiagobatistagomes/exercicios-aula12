#include <stdio.h>

/*
    Faça uma função que recebe um valor N e retorne o somatório dos quadrados dos números de 1 a N. No
Moodle, insira apenas a sua função, que deve ter a seguinte assinatura:
int quadrados(int n)
*/

int quadrados(int n);

int main ()
{
    int n, resp;

    printf("Digite um numero: \n");
    scanf("%d", &n);

    resp = quadrados(n);

    printf("Quadrados dos numeros de 1 a %d: %d\n", n, resp);

    return 0;
}

int quadrados(int n)
{
    int i, soma = 0;
    for(i = 1; i <= n; i++)
    {
        soma += i * i;
    }
    return soma;
}