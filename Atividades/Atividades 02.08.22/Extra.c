#include <stdio.h>

int main()
{
    /*
    Vari�veis:
    
    T = Tempo percorrido;
    V = Velocidade m�dia;
    D = Dist�ncia percorrida;
    L = Litros de combust�vel consumidos;
    */
    float T, V, D, L;
    
    // Obt�m os valores;
    printf("Insira o tempo decorrrido: \n");
    scanf("%f", &T);
    printf("Insira a velocidade m�dia: \n");
    scanf("%f", &V);
    
    // Aplica a f�rmula;
    D = T*V;
    L = D/12;
    
    // Imprime o resultado;
    printf("Dist�ncia percorrida em horas: %f \n", D);
    printf("Litros de combust�vel consumidos: %f \n", L);
    
    
}
