#include <stdio.h>

int main()
{
    int num1, num2, num3;
    
    printf("Digite o primeiro número: \n");
    scanf("%d", &num1);
    printf("Digite o segundo número: \n");
    scanf("%d", &num2);
    printf("Digite o terceiro número: \n");
    scanf("%d", &num3);
    
    if(num1 > num2 && num1 > num3){
        printf("O maior número é: %d", num1);
    }
    else if(num2 > num1 && num2 > num3){
        printf("O maior número é: %d", num2);
    }
    else if (num3 > num1 && num3 > num2){
        printf("O maior número é: %d", num3);
    }

    return 0;
}
