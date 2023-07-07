#include <stdio.h>

/*
    Faça uma função que receba um vetor de inteiros e o seu tamanho, e devolva o valor do maior elemento
presente no vetor. No Moodle, insira apenas a sua função, que deve ter a seguinte assinatura:
int maxvet(int *vet, int n)
*/

int maxvet(int *vet, int n);

#define TAM 5

int main ()
{
    int vet[TAM];

    printf("Digite %d elementos inteiros:\n", TAM);
    for (int i = 0; i < TAM; i++)
    {
        scanf("%d", &vet[i]);
    }

    int maior = maxvet(vet, TAM);

    printf("O maior elemento do vetor eh: %d\n", maior);




    return 0;
}

int maxvet(int *vet, int n)
{
     int max = vet[0]; // assumimos o primeiro elemento como o maior inicialmente

    for (int i = 1; i < n; i++)
    {
        if (vet[i] > max)
        {
            max = vet[i]; // atualizamos o valor do maior elemento
        }
    }

    return max; // retornamos o maior elemento encontrado
}