#include <stdio.h>

int main()
{
    
    float num;
    
    printf("Insira um n�mero: \n");
    scanf("%f", &num);
    
    if(num > 20){
        printf("O n�mero � maior que 20 \n");
    }
    else if(num == 20){
        printf("O n�mero � �gual que 20 \n");
    }
    else{
        printf("O n�mero � menor que 20 \n");
    }
    return 0;
}