#include <stdio.h>


int main()
{
    
    int num;
    
    printf("Digite o número: \n");
    scanf("%d", &num);
    
    if( num % 5 != 0){
        printf("Não divisível por 5");
    }
    else
    {
        printf("Divisível por 5");
    }
    
    return 0;
}