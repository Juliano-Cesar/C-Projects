#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Vhora = Valor da hora
        Anum = Número de aulas
        Dinss = Desconto do INSS
        Sal = Salário
    */
    float Vhora, Anum, Dinss, Sal;
    
    printf("Digite o valor da hora da aula: \n");
    scanf("%f", &Vhora);
    printf("Número de aulas: \n");
    scanf("%f", &Anum);
    printf("Desconto do INSS: \n");
    scanf("%f", &Dinss);
    
    Sal = Vhora * Anum;
    Dinss = Dinss / 100;
    
    printf("Salario líquido: %.3f", Sal - (Sal * Dinss));
   
}