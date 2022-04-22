#include <stdio.h>
#include <stdlib.h>

int test(int* asd) {
    if(*asd == 1) {
        return 1;
    }
    
    return 0;
}

int test2(int* asd) {
    if(*asd > 21) {
        return 1;
    }
    
    return 0;
}

int main()
{
        int sex[20][1028];
        int id[20][1028];
        char nome[20][1028];
    
    for(int i = 1; i <= 20; i++){
        
        printf("Digite o nome: \n");
        scanf("%s", nome[i]);
        
        printf("Digite a idade: \n");
        scanf("%d", id[i]);
        
        printf("Digite o sexo (1 - Masculino; 2 - Feminino; 3 - Não existe): \n");
        scanf("%d", sex[i]);
        
    }
    
    for(int i = 1; i <= 20; i++){
        if(test(sex[i]) == 1 && test2(id[i]) == 1) {
            printf("\n-----------------------------------------------------------------\n");
            printf("%s Pertence ao sexo masculino e tem mais de 21 anos de idade \n", nome[i]);
            printf("\n-----------------------------------------------------------------\n");
        }
    }
    
    return 0;
}