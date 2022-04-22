#include <stdio.h>

int main()
{
    
    float sal, prest;
    
    printf("Insira o salário bruto: \n");
    scanf("%f", &sal);
    printf("Digite o valor da prestação: \n");
    scanf("%f", &prest);
    
    if(prest > (sal * 0.30)){
        printf("Empréstimo não pode ser concedido");
    }
    else
    {
        printf("Empréstimo pode ser concedido");
    }
    
    return 0;
}