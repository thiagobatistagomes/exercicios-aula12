#include <stdio.h>
#include <string.h>

/*
    Faça uma função que receba um número inteiro e retorne a soma de seus algarismos. No Moodle, insira
seu programa completo (main + funções).
*/

int somaalgarismos(int n);

int main ()
{
    int n, soma;

    printf("Digite um numero: \n");
    scanf("%d", &n);

    soma = somaalgarismos(n);

    printf("Soma dos algarismos de %d: %d", n, soma);


    return 0;
}

int somaalgarismos(int n)
{
    int soma = 0;
    char numStr[30];
    sprintf(numStr, "%d", n);

    for (int i = 0; i < strlen(numStr); i++)
    {
        soma += numStr[i] - '0'; // converter o caractere numerico em seu valor inteiro correspondente
    }

    return soma;
}