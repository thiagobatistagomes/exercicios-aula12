#include <stdio.h>
#include <stdlib.h>

/*
    Faça uma função que receba um array de inteiros, seu tamanho (N) e duas variáveis inteiras. Armazene
nessas variáveis o valor mínimo e máximo do array. O main deve ler N, ler o vetor, chamar a função e
imprimir o menor valor separado do maior por um único espaço. Use apenas aritmética de ponteiros, isto é,
faça este programa sem usar colchetes. No Moodle, insira seu programa completo (main + funções).
*/

void minMaxArray(int* array, int size, int* minValue, int* maxValue);

int main ()
{
    int N;
    printf("Digite o tamanho do array: ");
    scanf("%d", &N);

    int* array = (int*)malloc(N * sizeof(int));

    printf("Digite os elementos do array: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", array + i);
    }

    int minValue, maxValue;
    minMaxArray(array, N, &minValue, &maxValue);

    printf("Valor minimo: %d\n", minValue);
    printf("Valor maximo: %d\n", maxValue);

    free(array);



    return 0;
}

void minMaxArray(int* array, int size, int* minValue, int* maxValue)
{
    *minValue = *maxValue = *array;

    for (int i = 1; i < size; i++)
    {
        if (*(array + i) < *minValue)
        {
            *minValue = *(array + i);
        }

        if (*(array + i) > *maxValue)
        {
            *maxValue = *(array + i);
        }
    }
}