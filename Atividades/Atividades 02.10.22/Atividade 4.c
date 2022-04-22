//Importa as bibliotecas
#include <stdio.h>
#include <math.h>
//Define constante de PI
//float m_pi = 3.141592;

int main()
{
    //Aloca as variáveis;
    float liq, vDesc = 0;
    
    printf("Digite o valor líquido: \n");
    scanf("%f", &liq);
    
    vDesc = (liq - (liq * 0.10));
    
    printf("Valor a pagar com 10 porcento de desconto: %.2f \n", vDesc);
    printf("Valor de cada parcela 3x sem juros: %.2f \n", liq/3);
    printf("Comissão do vendedor (venda a vista - 5 porcento valor parcelado): %.2f \n", vDesc*0.05);
    printf("Comissão do vendedor (venda parcelada - 5 porcento valor total: %.2f \n", liq*0.05);
    
    return 0;
}