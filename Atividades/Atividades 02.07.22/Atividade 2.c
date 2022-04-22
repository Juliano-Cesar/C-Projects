#include <stdio.h>

int main()
{
    //Define as variáveis
    float num1, num2, letraD;
    
    //Obtém os valores das variáveis
    printf("Digite o primeiro número: \n");
    scanf("%f", &num1);
    printf("Digite o segundo número: \n");
    scanf("%f", &num2);
    
    //Ignorar
    letraD = num1*num2;
    
    //Letra A
    printf("Soma dos números: %f \n", num1+num2);
    //Letra B
    printf("Produto dos números: %f \n", num1*num2);
    //Letra C
    printf("Média: %f \n", (num1+num2)/2);
    //Letra D
    printf("Produto do primeiro número pelo quadrado do segundo número: %f \n", (letraD*letraD));
    //Letra E
    printf("Quadrado do primeiro número: %f \n", num1*num1);
    //Letra F
    printf("Quadrado do segundo número: %f \n", num2*num2);
    
    return 0;
}
