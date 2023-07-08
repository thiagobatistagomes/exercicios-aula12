#include <stdio.h>

/*
    Seja a seguinte struct para representar pontos no espaço 2D:
    struct Ponto
    {
        int x, y;
    };
    Faça uma função booleana (devolve 0 = não, ou 1 = sim) que receba um Ponto P e verifique se ele está
    contido no interior de um retângulo. O retângulo é definido por dois pontos: o vértice inferior esquerdo (v1)
    e o vértice superior direito (v2). Para todos os pontos, leia as coordenadas X e Y. No Moodle, insira seu
    programa completo (main + funções).
*/

typedef struct Ponto
{
    int x, y;
} Ponto;

int pontoDentroRetangulo(Ponto ponto, Ponto v1, Ponto v2);

int main ()
{
    Ponto ponto, v1, v2;

    printf("Digite as coordenadas do ponto (x y): ");
    scanf("%d %d", &ponto.x, &ponto.y);

    printf("Digite as coordenadas do vertice inferior esquerdo (x y): ");
    scanf("%d %d", &v1.x, &v1.y);

    printf("Digite as coordenadas do vertice superior direito (x y): ");
    scanf("%d %d", &v2.x, &v2.y);

    int resultado = pontoDentroRetangulo(ponto, v1, v2);

    if (resultado)
    {
        printf("O ponto esta contido no interior do retangulo.\n");
    }
    else
    {
        printf("O ponto nao esta contido no interior do retangulo.\n");
    }




    return 0;
}

int pontoDentroRetangulo(Ponto ponto, Ponto v1, Ponto v2)
{
    if (ponto.x >= v1.x && ponto.x <= v2.x && ponto.y >= v1.y && ponto.y <= v2.y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}