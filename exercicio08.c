#include <stdio.h>

/*
     Faça uma função que receba um número N e retorne a quantidade de números primos menores que N
existentes. No Moodle, insira apenas a sua função, que deve ter a seguinte assinatura:
int qtdprimos(int n)
*/

int qtdprimos(int n);

int main ()
{
    int n, resp;

    printf("Digite um numero: \n");
    scanf("%d", &n);

    resp = qtdprimos(n);

    printf("Quantidade de numeros primos menores que %d: %d\n", n, resp);


    return 0;
}

int qtdprimos(int n)
{
     int i, j, count, primo;

    count = 0;

    for (i = 2; i < n; i++)
    {
        primo = 1; // assume que i é primo

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                primo = 0; // i não é primo
                break;
            }
        }

        if (primo)
        {
            count++;
        }
    }

    return count;
    
}