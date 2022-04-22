//Importa as bibliotecas
#include <stdio.h>
#include <math.h>
//Define constante de PI
//float m_pi = 3.141592;

int main()
{
    //Aloca as variáveis;
    float Pag, Dia = 0;
    
    Pag = 30.00;
    
    printf("Número total de dias trabalhados: \n");
    scanf("%f", &Dia);
    printf("O sálario final é de: %.2f", (Pag*Dia)-((Pag*Dia)*0.08));
    
    
    return 0;
}