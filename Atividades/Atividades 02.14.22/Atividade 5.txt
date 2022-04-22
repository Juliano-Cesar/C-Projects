#include <stdio.h>

int main()
{
    
    int num;
    
    printf("Digite o número: \n");
    scanf("%d", &num);
    
    if( num % 3 == 0 && num % 7 == 0){
        printf("Divisível por 3 e por 7");
    }
    else
    {
        printf("Não divisível por 3 e por 7");
    }
    
    return 0;
}