#include <stdio.h>

int main()
{
    //Define a vari�vel
    float input;
    
    //Obt�m o saldo
    printf("Digite o valor: \n");
    scanf("%f", &input);
    
    //Realiza o c�lculo
    printf("Valor com juros: %.2f \n", (input*0.02)+input);
}