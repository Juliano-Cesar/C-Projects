#include <stdio.h>

int main()
{
    
    float num;
    
    printf("Insira um número: \n");
    scanf("%f", &num);
    
    if(num > 20){
        printf("O número é maior que 20 \n");
    }
    else if(num == 20){
        printf("O número é ígual que 20 \n");
    }
    else{
        printf("O número é menor que 20 \n");
    }
    return 0;
}