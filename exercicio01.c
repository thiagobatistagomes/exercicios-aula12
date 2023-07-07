#include <stdio.h>
#include <string.h>

void dataextenso(char data[]);

int main ()
{
    char data[12];

    printf("Digite a data (dd/mm/aaaa): \n");
    scanf("%s", data);

    dataextenso(data);

    return 0;
}

void dataextenso(char data[])
{
    char dia[3], mes[3], ano[5];

    // Extrair dia, mês e ano da string de data
    strncpy(dia, data, 2);
    dia[2] = '\0';
    strncpy(mes, data + 3, 2);
    mes[2] = '\0';
    strncpy(ano, data + 6, 4);
    ano[4] = '\0';

    // Converter dia, mês e ano para números inteiros
    int d = atoi(dia);
    int m = atoi(mes);
    int a = atoi(ano);

    // Array de nomes dos meses
    char nomes_meses[12][15] = {
        "janeiro",
        "fevereiro",
        "marco",
        "abril",
        "maio",
        "junho",
        "julho",
        "agosto",
        "setembro",
        "outubro",
        "novembro",
        "dezembro"
    };

    // Imprimir data por extenso
    printf("%d de %s de %d\n", d, nomes_meses[m-1], a);
}