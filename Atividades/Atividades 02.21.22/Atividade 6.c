#include <stdio.h>
#include <stdlib.h>

void main()
{
    int am;
    int seq[20] = {1,1};
    
    printf("Digite a quantidade de números da Sequencia de Fibonacci a serem calculados: \n");
    scanf("%d", &am);
    printf("\n ------------------------ \n");
    
    for(int i = 1; i <= am; i++){
        seq[i + 1] = seq[i - 1] + seq[i];
    }
    
    for (int i = 0; i <= am; i++) {
        printf("%d \n", seq[i]);
    }
    
}
