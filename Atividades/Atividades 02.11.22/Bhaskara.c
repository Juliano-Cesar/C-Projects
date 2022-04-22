#include <stdio.h>
#include <math.h>

int main()
{
    //Define as variáveis;
    float a,b,c,delta,x1,x2 = 0;
    
    //Obtém os valores;
    printf("Digite o coeficiente A: \n");
    scanf("%f",&a);
    printf("Digite o coeficiente B: \n");
    scanf("%f",&b);
    printf("Digite o coeficiente C: \n");
    scanf("%f",&c);
    
    //Realiza os cálculos;
    delta = (pow(b,2)-4*a*c);
    x1 = ((-b+sqrt(delta))/(2*a));
    x2 = ((-b-sqrt(delta))/(2*a));
    
    //Imprime o resultado;
    printf("Delta: %.2f \n", delta);
    printf("X1: %.2f \n", x1);
    printf("X2: %.2f \n", x2);
}
