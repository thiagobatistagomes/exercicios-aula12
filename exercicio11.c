#include <stdio.h>
#include <stdlib.h>

/*
   Faça uma função que receba um vetor de inteiros e o seu tamanho, e devolva a média dos seus
elementos. No Moodle, insira apenas a sua função, que deve ter a seguinte assinatura:
double avgvet(int *vet, int n) 
*/

double avgvet(int *vet, int n);

int main ()
{
    int *vet;
    int n, i;
    double media;

    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &n);

    vet = (int *)malloc(n * sizeof(int));

    if(vet == NULL)
    {
        printf("Falha ao alocar a memoria!\n");
        exit(1);
    }   

    printf("Digite %d elementos inteiros:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    media = avgvet(vet, n);

    printf("Media dos elementos do vetor: %.2lf\n", media);

    free(vet);

    return 0;
}

double avgvet(int *vet, int n)
{
    int soma = 0, i;
    double media;

    for(i = 0;i < n;i++)
    {
        soma += vet[i];
    }

    media = (double)soma / n;

    return media;
}