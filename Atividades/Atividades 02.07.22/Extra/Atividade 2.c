#include <stdio.h>

int main()
{
    //Define a variável
    float input;
    
    //Obtém o saldo
    printf("Digite o valor: \n");
    scanf("%f", &input);
    
    //Realiza o cálculo
    printf("Valor com juros: %.2f \n", (input*0.02)+input);
}