//Importa as bibliotecas
#include <stdio.h>
#include <math.h>
//Define constante de PI
//float m_pi = 3.141592;
//https://pt.stackoverflow.com/questions/389534/exerc%C3%ADcio-de-bol%C3%A3o-em-python
/*

float gambiarra(float n1, float n2)
{
    //N1 = Valor total
    //n2 = Porcentagem a ser descoberta
    
    float temp = 0;
    
    temp = n1/(n2*100);
    
    return temp;
}

*/

int main()
{
    float apo1, apo2, apo3, Pre, ApostaT,apo1p, apo2p, apo3p = 0;
    
    printf("Investimento do primeiro apostador: \n");
    scanf("%f", &apo1);
    printf("Investimento do segundo apostador: \n");
    scanf("%f", &apo2);
    printf("Investimento do terceiro apostador: \n");
    scanf("%f", &apo3);
    printf("Valor do premio: \n");
    scanf("%f", &Pre);
    
    
    
    ApostaT = apo1+apo2+apo3;
    //apo1p = gambiarra(ApostaT, apo1);
    //apo2p = gambiarra(ApostaT, apo2);
    //apo3p = gambiarra(ApostaT, apo3);
    apo1p = (apo1 / ApostaT)*Pre;
    apo2p = (apo2 / ApostaT)*Pre;
    apo3p = (apo3 / ApostaT)*Pre;
    
    printf("Apostador 1: %.4f \n", apo1p);
    printf("Apostador 2: %.4f \n", apo2p);
    printf("Apostador 3: %.4f \n", apo3p);
        
    return 0;
}