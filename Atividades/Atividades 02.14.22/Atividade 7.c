#include <stdio.h>

int main()
{
    
    float num;
    
    printf("Digite o n�mero: \n");
    scanf("%f", &num);
    
    if(num >= 20 && num <= 50){
        printf("%.2f Est� compreendido entre 20 e 50", num);
    }
    else
    {
        printf("%.2f N�o est� compreendido entre 20 e 50", num);
    }
    return 0;
}