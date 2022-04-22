#include <stdio.h>
#include <math.h>

int main()
{
    /*H = hipotenusa
    Ca=cateto adjacente
    Co=catero oposto
    */
    
    float H, Ca, Co;
    
    printf("Digite o Cateto adjacente: \n");
    scanf("%f", &Ca);
    printf("Digite o Cateto oposto: \n");
    scanf("%f", &Co);
    
    H = pow(Ca, 2)+pow(Co, 2);
    
    printf("A hipotenusa do triangulo é: %f", sqrt(H));

    return 0;
}