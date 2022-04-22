#include <stdio.h>
#include <stdlib.h>

int test(int* asd) {
    return *asd;
}

int porc(int input) {
    int temp = input*100;
    temp = temp/20;
    
    return temp;
}

int main()
{
    int idades[20][128];
    int notas[20][128];
    int EXQuant = 0,REGQuant = 0,BQuant = 0,idEX = 0;
    
    for(int i = 1; i <= 20; i++) {
        printf("Digite a idade: \n");
        scanf("%d", idades[i]);
        printf("Digite a nota (excelente - 3; bom - 2; regular – 1): \n");
        scanf("%d", notas[i]);
    }
    
    for(int i = 1; i <= 20; i++) {
        if(test(notas[i]) == 3) {
            idEX += test(idades[i]);
            EXQuant++;
        }
        
        if(test(notas[i]) == 1) {
            REGQuant++;
        }
        
        if(test(notas[i]) == 2) {
            BQuant++;
        }
    }
    
    printf("Média das idades das pessoas que responderam excelente: %d \n", idEX / EXQuant);
    printf("Quantidade de pessoas que responderam regular: %d \n", REGQuant);
    printf("Porcentagem das pessoas que responderam bom: %d por cento.", porc(BQuant));
    
    return 0;
}
