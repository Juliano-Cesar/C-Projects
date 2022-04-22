#include <stdio.h>

int main()
{
    float input;
    
    printf("Insira o valor desejado: \n");
    scanf("%f", &input);
    
    printf("Convertido para centímetros: %f \n", input*100);
    printf("Convertido para milímetros: %f \n", input*1000);
}
