#include <stdio.h>

int main()
{
    float salario, porcRe;
    
    printf("Digite o salário atual: \n");
    scanf("%f", &salario);
    printf("Digite o percentual de reajuste: \n");
    scanf("%f", &porcRe);
    
    porcRe = porcRe / 100;
    
    printf("O valor do novo salário é: %.2f", salario + (salario * porcRe));
    
}