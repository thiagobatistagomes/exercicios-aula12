#include <stdio.h>
#include <string.h>

/*
     Faça uma função que receba um número N e retorne a soma dos algarismos do fatorial de N. No Moodle,
insira apenas a sua função, que deve ter a seguinte assinatura:
int somafat(int n)
*/

int somafat(int n);

int main ()
{
    int n, resp;

    printf("Digite um numero: \n");
    scanf("%d", &n);

    resp = somafat(n);

    printf("Soma dos algarismos do fatorial de %d: %d\n", n, resp);

    return 0;
}

int somafat(int n)
{
    int i, soma = 0;
    char numstr[30];
    long long int resultado = 1;
    for(i = n; i >= 1; i--)
    {
        resultado *= i;
    }
    sprintf(numstr, "%lld", resultado);

    for (int i = 0; i < strlen(numstr); i++)
    {
        soma += numstr[i] - '0'; 
    }
    return soma;
}