#include <stdio.h>

/*
    Faça uma função booleana (devolve 0 = não, ou 1 = sim) que recebe um valor inteiro N e retorne se esse
número é primo ou não. No Moodle, insira apenas a sua função (sem main, sem includes), que deve ter a
seguinte assinatura:
int primo(int n)
O Moodle irá invocar sua função dentro de um printf para verificar a corretude.
*/

int primo(int n);

int main ()
{
    int n, resposta;

    printf("Digite um numero: \n");
    scanf("%d", &n);

    resposta = primo(n);

    printf("%d", resposta);


    return 0;
}

int primo(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    if (n == 2)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        return 0;
    }

    int limite = sqrt(n);

    for (int i = 3; i <= limite; i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;

}