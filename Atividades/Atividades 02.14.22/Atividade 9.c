#include <stdio.h>

int main()
{
    
    int nasc, ano,fake;
    ano = 2022;
    fake = 1900;
    
    printf("Digite o ano de nascimento: \n");
    scanf("%d", &nasc);
    
    if(nasc >= fake){
        printf("Idade: %d \n", ano - nasc);
    }
    else{
        printf("Ano de nascimento inválido!");
    }
    return 0;
}