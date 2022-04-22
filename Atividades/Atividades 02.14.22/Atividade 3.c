#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Define as variáveis
    int num;
    
    printf("Digite um número: \n");
    scanf("%d", &num);
    
    if(num % 3 == 0){
        printf("É múltiplo de 3");
    }
    else{
        printf("Não é múltiplo de 3");
    }
    
    return 0;
}
