#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        VPV = Valor da prestação vencida;
        TPJ = Taxa periódica de juros;
        PDA = Período de atraso;
    */
    float VPV, TPJ, PDA, Juros;
    
    //Obtém os valores
    printf("Insira o valor da prestação vencida: \n");
    scanf("%f", &VPV);
    printf("Insira a taxa periódica de juros: \n");
    scanf("%f", &TPJ);
    printf("Insira o período de atraso: \n");
    scanf("%f", &PDA);
    
    //Calcula os juros
    Juros = (VPV * (TPJ / 100) * PDA);
    
    //Imprime os resultados
    printf("Valor da prestação atrasada: %.2f \n", VPV);
    printf("Período de atraso: %.2f \n", PDA);
    printf("Juros cobrados pelo atraso: %.2f \n", Juros);
    printf("Valor da prestação acrescida de juros: %.2f", Juros+VPV);
    
}