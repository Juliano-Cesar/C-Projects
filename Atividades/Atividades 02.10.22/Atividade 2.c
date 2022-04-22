//Importa as bibliotecas
#include <stdio.h>
#include <math.h>
//Define constante de PI
float m_pi = 3.141592;

int main()
{
    //Aloca as variáveis;
    float quantia,porc1,porc2,porc3 = 0.0;
    
    //Obtém o valor a ser dividido;
    printf("Digite a quantia a ser dividida: \n");
    scanf("%f", &quantia);
    
    //Realiza os cálculos de porcentagem;
    porc1 = quantia * 0.46;
    porc2 = quantia * 0.32;
    porc3 = quantia * 0.22;
    
    //Imprime os resultados
    printf("O primeiro ganhador receberá: %.3f \n", porc1);
    printf("O segundo ganhador receberá: %.3f \n", porc2);
    printf("O terceiro ganhador receberá: %.3f \n", porc3);
    
    return 0;
}