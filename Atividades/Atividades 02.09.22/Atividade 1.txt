#include <stdio.h>

int main()
{
    float Input, Cota;
    
    printf("Digite a quantia em reais: \n");
    scanf("%f", &Input);
    printf("Digite a cotação do dólar: \n");
    scanf("%f", &Cota);
    printf("O valor inserido convertido para dólares é: %.2f", Input/Cota);
    
    return 0;
}