#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Digite o primeiro numero inteiro: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: \n");
    scanf("%d", &num2);
    
    if(num1+num2 > 10){
        printf("%d", num1+num2);
    }
    else{
        printf("Menor ou igual a 10");
    }
    
    return 0;
}
