#include <stdio.h>

int main()
{
    float input;
    
    printf("Insira o valor desejado: \n");
    scanf("%f", &input);
    
    printf("Convertido para cent�metros: %f \n", input*100);
    printf("Convertido para mil�metros: %f \n", input*1000);
}
