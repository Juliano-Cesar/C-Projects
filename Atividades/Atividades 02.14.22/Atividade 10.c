#include <stdio.h>

int main () {
    int num1, num2, num3, maior, medio, menor;
    printf("insira o primeiro numero\n");
    scanf("%d",&num1);
    printf("insira o segundo numero\n");
    scanf("%d",&num2);
    printf("insira o terceiro numero\n");
    scanf("%d",&num3);
    
    maior = (((num1 > num2) ? num1 : num2 ) > num3 ? ( (num1 > num2) ? num1 : num2 ) : num3);
    medio = (((num1 == maior) ? ((num2 > num3) ? num2 : num3) : ((num2 == maior) ? ((num1 > num3) ? num1 : num3) : ((num1 > num2) ? num1 : num2))));
    menor = (((num1 != maior && num1 != medio) ? num1 : ((num2 != maior && num2 != medio) ? num2 : num3)));
    
    printf("Maior: %d \n", maior);
    printf("Médio: %d \n", medio);
    printf("Menor: %d \n", menor);
}