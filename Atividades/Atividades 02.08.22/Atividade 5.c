#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Define as variáveis
    float Vpro, Desc;
    
    //Obtém os valores
    printf("Digite o valor do produto: \n");
    scanf("%f", &Vpro);
    printf("Digite o desconto: \n");
    scanf("%f", &Desc);
    
    Desc = Desc / 100;
    
    printf("Valor do desconto: %.2f \n", Vpro - (Vpro - (Vpro * Desc)));
    printf("Valor do Final: %.2f", Vpro - (Vpro * Desc));
    //printf("Valor final: %f")
    
    
}