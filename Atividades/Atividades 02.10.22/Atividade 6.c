#include <stdio.h>

int main()
{
    float comp, larg, pre = 0;
    
    printf("Digite o comprimento do terreno: \n");
    scanf("%f", &comp);
    printf("Digite a largura do terreno: \n");
    scanf("%f", &larg);
    printf("Digite o preço do metro do arame: \n");
    scanf("%f", &pre);
    
    comp *= 2;
    larg *= 2;
    
    printf("Custo para cercar o terreno: %.2f \n", (comp+larg)*pre);
    
    return 0;
}