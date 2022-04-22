#include <stdio.h>

int main()
{
    int mes;
    
    printf("Insira o número de 1 a 12: \n");
    scanf("%d", &mes);
    
    switch (mes) {
        case 1:
            printf("O mês equivalente é Janeiro.");
        break;
        case 2:
            printf("O mês equivalente é Fevereiro.");
        break;
        case 3:
            printf("O mês equivalente é Março.");
        break;
        case 4:
            printf("O mês equivalente é Abril.");
        break;
        case 5:
            printf("O mês equivalente é Maio.");
        break;
        case 6:
            printf("O mês equivalente é Junho.");
        break;
        case 7:
            printf("O mês equivalente é Julho.");
        break;
        case 8:
            printf("O mês equivalente é Agosto.");
        break;
        case 9:
            printf("O mês equivalente é Setembro.");
        break;
        case 10:
            printf("O mês equivalente é Outubro.");
        break;
        case 11:
            printf("O mês equivalente é Novembro.");
        break;
        case 12:
            printf("O mês equivalente é Dezembro.");
        break;
        default:
            printf("O mês inserido é inválido!");
    }

    
    return 0;
}