#include <stdio.h>

void main()
{
    int maior, medio, menor, num1, num2, num3 = 0;
    
    /* 
    Num1: Pontua��es do jogador 1
    Num2: Pontua��es do jogador 2
    Num3: Pontua��es do jogador 3
    */
    
    printf("Digite a pontua��o do Jogador 1: \n");
    scanf("%d", &num1);
    printf("Digite a pontua��o do Jogador 2: \n");
    scanf("%d", &num2);
    printf("Digite a pontua��o do Jogador 3: \n");
    scanf("%d", &num3);
    
    maior = (((num1 > num2) ? num1 : num2 ) > num3 ? ( (num1 > num2) ? num1 : num2 ) : num3);
    medio = (((num1 == maior) ? ((num2 > num3) ? num2 : num3) : ((num2 == maior) ? ((num1 > num3) ? num1 : num3) : ((num1 > num2) ? num1 : num2))));
    menor = (((num1 != maior && num1 != medio) ? num1 : ((num2 != maior && num2 != medio) ? num2 : num3)));
    
    printf("Pontua��es dos jogadores em ordem decrescente: %d %d %d \n", maior, medio, menor);
    if((maior + medio + menor) > 100) {
        printf("M�dia aritim�tica das notas: %d", ((maior + medio + menor) / 3));
    }
    else {
        printf("Equipe desclassificada");
    }
}
