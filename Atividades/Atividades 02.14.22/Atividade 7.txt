#include <stdio.h>

int main()
{
    
    float num;
    
    printf("Digite o número: \n");
    scanf("%f", &num);
    
    if(num >= 20 && num <= 50){
        printf("%.2f Está compreendido entre 20 e 50", num);
    }
    else
    {
        printf("%.2f Não está compreendido entre 20 e 50", num);
    }
    return 0;
}