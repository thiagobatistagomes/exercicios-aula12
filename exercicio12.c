#include <stdio.h>
#include <string.h>

/*
   Faça uma função booleana que receba duas strings A e B e verifique se a string A está contida no final
da string B. A função deve retornar 0 (para não) ou 1 (para sim). No Moodle, insira apenas a sua função, que
deve ter a seguinte assinatura:
int afimb(char *a, char *b) 
*/

int afimb(char *a, char *b);

int main ()
{
    char a[30], b[30];
    int i, resp;

    printf("Digite duas frases: \n");
    scanf("%[^\n]", a);
    scanf(" %[^\n]", b);

    resp = afimb(a, b);

    if(resp == 1)
    {
        printf("A string A esta contida no final da string B.\n");
    }
    else
    {
        printf("A string A nao esta contida no final da string B.\n");
    }


    return 0;
}

int afimb(char *a, char *b)
{
    int len_a = strlen(a);
    int len_b = strlen(b);
    int i, j;

    // Remover espaços em 'a'
    char a_sem_espacos[30];
    int idx_a = 0;
    for (i = 0; i < len_a; i++)
    {
        if (a[i] != ' ')
        {
            a_sem_espacos[idx_a] = a[i];
            idx_a++;
        }
    }
    a_sem_espacos[idx_a] = '\0';

    // Remover espaços em 'b'
    char b_sem_espacos[30];
    int idx_b = 0;
    for (j = 0; j < len_b; j++)
    {
        if (b[j] != ' ')
        {
            b_sem_espacos[idx_b] = b[j];
            idx_b++;
        }
    }
    b_sem_espacos[idx_b] = '\0';

    int len_a_sem_espacos = strlen(a_sem_espacos);
    int len_b_sem_espacos = strlen(b_sem_espacos);

    if (len_a_sem_espacos > len_b_sem_espacos)
    {
        return 0;
    }

    for (i = len_a_sem_espacos - 1, j = len_b_sem_espacos - 1; i >= 0; i--, j--)
    {
        if (a_sem_espacos[i] != b_sem_espacos[j])
        {
            return 0;
        }
    }

    return 1;
}