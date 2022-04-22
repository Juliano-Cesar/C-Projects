#include <stdio.h>
#include <math.h>

int main()
{
    float m_pi = 3.141592, Alt, Rai;
    
    printf("Digite a altura do cilindro circular: \n");
    scanf("%f", &Alt);
    printf("Digite o raio do cilindro circular: \n");
    scanf("%f", &Rai);
    printf("%f", m_pi*pow(Rai, 2)*Alt);
    
    return 0;
}
