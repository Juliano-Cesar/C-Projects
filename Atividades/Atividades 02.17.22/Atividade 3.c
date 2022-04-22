#include <stdio.h>

int main()
{
    int ida;
    
    printf("Insira a idade do participante: \n");
    scanf("%d", &ida);
    
    if(ida >= 5 && ida <= 7){
        printf("Categoria Infantil A");
        return 0;
    }
    if(ida >= 8 && ida <= 10){
        printf("Categoria Infantil B");
        return 0;
    }
    if(ida >= 11 && ida <= 13){
        printf("Categoria Juvenil A");
        return 0;
    }
    if(ida >= 14 && ida <= 17){
        printf("Categoria Juvenil B");
        return 0;
    }
    if(ida >= 18 && ida <= 75){
        printf("Categoria Sênior");
        return 0;
    }
    else {
        printf("Idade inválida");
    }

    return 0;
}
