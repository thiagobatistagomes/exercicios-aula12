#include <stdio.h>
#include <stdlib.h>

/*
    Faça uma função que receba um valor N e dois vetores de tamanho N. A função deve alocar um terceiro
vetor, formado pela soma dos dois vetores recebidos e devolvê-lo ao main. Por fim, o main imprime o vetor
soma, sendo um elemento separado do outro por um único espaço. Use apenas aritmética de ponteiros, isto
é, faça este programa sem usar colchetes. O main deve ler o valor N, alocar e ler os dois vetores. No
Moodle, insira seu programa completo (main + funções).
*/

int* somaVetores(int* vet1, int* vet2, int n);

int main ()
{
    int n, i;
    int* vet1;
    int* vet2;
    int* vetSoma;

    printf("Digite o valor de N: \n");
    scanf("%d", &n);

    vet1 = (int*)malloc(n * sizeof(int));
    vet2 = (int*)malloc(n * sizeof(int));

    if (vet1 == NULL || vet2 == NULL)
    {
        printf("Falha ao alocar a memoria para um, ou os dois vetores.\n");
        exit(1);
    }

    printf("Digite %d elementos inteiros do primeiro vetor:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", vet1 + i);
    }

    printf("Digite %d elementos inteiros do segundo vetor:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", vet2 + i);
    }

    vetSoma = somaVetores(vet1, vet2, n);

    printf("Vetor soma: \n");
    for (i = 0; i < n; i++)
    {
        printf(" %d", *(vetSoma + i));
    }
    printf("\n");

    free(vet1);
    free(vet2);
    free(vetSoma);



    return 0;
}

int* somaVetores(int* vet1, int* vet2, int n)
{
    int* vetSoma = (int*)malloc(n * sizeof(int));

    if (vetSoma == NULL)
    {
        printf("Falha ao alocar a memoria para o vetor soma.\n");
        exit(1);
    }

    int i;
    for (i = 0; i < n; i++)
    {
        *(vetSoma + i) = *(vet1 + i) + *(vet2 + i);
    }

    return vetSoma;
}