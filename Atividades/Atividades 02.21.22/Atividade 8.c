#include <stdio.h>
#include <stdlib.h>

float test(float* asd) {
    
    if(*asd < 1300) {
        return 1;
    }
    if(*asd >= 1300 && *asd < 2300) {
        return 2;
    }
    if(*asd >= 2300) {
        return 3;
    }
    
    return 0;
}

int retvalor(float* qwerty) {
    return *qwerty;
}

int main()
{
    char nomes[3][128];
    float sal[3][128];
    
    for(int i = 1; i <= 3; i++) {
        printf("Digite o nome: \n");
        scanf("%s", nomes[i]);
        printf("Digite o salário: \n");
        scanf("%f", sal[i]);
    }
    
    for(int i = 1; i <= 3; i++) {
        if(test(sal[i]) == 1) {
            printf("------------------------------------------------------\n");
            printf("Nome: %s \n", nomes[i]);
            printf("Valor da aliquota: * Isento * \n");
            printf("------------------------------------------------------\n");
        }
        else if(test(sal[i]) == 2) {
            printf("------------------------------------------------------\n");
            printf("Nome: %s \n", nomes[i]);
            printf("Valor da aliquota: %.2f \n", (retvalor(sal[i])) * 0.10);
            printf("------------------------------------------------------\n");
        }
        else if(test(sal[i]) == 3) {
            printf("------------------------------------------------------\n");
            printf("Nome: %s \n", nomes[i]);
            printf("Valor da aliquota: %.2f \n", (retvalor(sal[i]) * 0.15));
            printf("------------------------------------------------------\n");
        }
    }
    
    return 0;
}
