#include <stdio.h>

/*
    Faça uma função que recebe um valor N e retorne o valor da soma dos N primeiros termos da série:
S = 0 + 1/2! + 2/4! + 3/6! + 4/8! + ...
O código deve declarar, também, uma função que calcule o fatorial e seja usada pela função da série.
No Moodle, insira apenas as suas funções, que deve ter as seguintes assinaturas:
long long int fatorial(int x)
double serie(int n)
*/

long long int fatorial(int x);
double serie(int n);

int main ()
{
    int n;
    double resp;

    printf("Digite um numero: \n");
    scanf("%d", &n);

    resp = serie(n);

    printf("Valor dos %d primeiros termos da serie: %lf\n", n, resp);

    return 0;
}

long long int fatorial(int x)
{
    if (x <= 1)
    {
        return 1;
    } else {
        return x * fatorial(x - 1);
    }
}

double serie(int n)
{
    double soma = 0.0;
    for (int i = 0; i < n; i++)
    {
        soma += (double)i / fatorial(2 * i);
    }
    return soma;
}