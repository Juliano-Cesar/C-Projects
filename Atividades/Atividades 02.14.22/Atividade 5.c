#include <stdio.h>

int main()
{
    
    int num;
    
    printf("Digite o n�mero: \n");
    scanf("%d", &num);
    
    if( num % 3 == 0 && num % 7 == 0){
        printf("Divis�vel por 3 e por 7");
    }
    else
    {
        printf("N�o divis�vel por 3 e por 7");
    }
    
    return 0;
}