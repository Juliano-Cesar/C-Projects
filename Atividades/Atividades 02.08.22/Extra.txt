#include <stdio.h>

int main()
{
    /*
    Variáveis:
    
    T = Tempo percorrido;
    V = Velocidade média;
    D = Distância percorrida;
    L = Litros de combustível consumidos;
    */
    float T, V, D, L;
    
    // Obtém os valores;
    printf("Insira o tempo decorrrido: \n");
    scanf("%f", &T);
    printf("Insira a velocidade média: \n");
    scanf("%f", &V);
    
    // Aplica a fórmula;
    D = T*V;
    L = D/12;
    
    // Imprime o resultado;
    printf("Distância percorrida em horas: %f \n", D);
    printf("Litros de combustível consumidos: %f \n", L);
    
    
}
