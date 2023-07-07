#include <stdio.h>

/*
    Faça uma função que receba três notas de um aluno e uma letra. Se a letra for ‘A’, a função deve calcular
a média aritmética das notas do aluno; se for ‘P’, deve calcular a média ponderada, com pesos 5, 3 e 2. No
Moodle, insira seu programa completo (main + funções).
*/

float aritmetica(float n1, float n2, float n3);
float ponderada(float n1, float n2, float n3);

int main ()
{
    float n1, n2, n3, media;
    char letra;

    printf("Digite as notas: \n");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Digite uma letra (A para media aritmetica, P para media ponderada): \n");
    scanf(" %c", &letra);

    if(letra == 'A')
    {
        media = aritmetica(n1, n2, n3);
        printf("Media Aritmetica: %.2f", media);
    }
    else if(letra == 'P')
    {
        media = ponderada(n1, n2, n3);
        printf("Media Ponderada: %.2f", media);
    }


    return 0;
}

float aritmetica(float n1, float n2, float n3)
{
    float resp = (n1 + n2 + n3) / 3;
    return resp;
}

float ponderada(float n1, float n2, float n3)
{
    float resp = ((n1 * 5) + (n2 * 3) + (n3 * 2)) / (5 + 3 + 2);
    return resp;
}