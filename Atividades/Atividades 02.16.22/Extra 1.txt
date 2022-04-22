#include <stdio.h>

void main()
{
    int arr[12] = {180,230,250,350,75,110,170,200,20,70,100,65};
    int prato, bebida, sobremesa = 0;
    
    // Imprime o cardápio.
    printf("---------------------------------------------\n");
    printf("Pratos: 0 - Vegetariano; 1 - Peixe; 2 - Frango; 3 - Carne\n");
    printf("---------------------------------------------\n");
    printf("Sobremesas: 4 - Abacaxi; 5 - Sorvete; 6 - Mousse; 7 - Chocolate\n");
    printf("---------------------------------------------\n");
    printf("Bebidas: 8 - Chá; 9 - Suco; 10 - Processado; 11 - Refri Zero\n");
    printf("---------------------------------------------\n");
    
    // Obtém os valores.
    printf("Insira o prato ( 0 - 3 ): \n");
    scanf("%d", &prato);
    printf("Insira a sobremesa ( 4 - 7 ): \n");
    scanf("%d", &sobremesa);
    printf("Insira a bebida ( 8 - 11 ): \n");
    scanf("%d", &bebida);
    
    // Verifica se o cardápio inserido possui valores inválidos.
    if((prato > 3 || prato < 0) || (sobremesa < 4 || sobremesa > 7) || (bebida < 8 || bebida > 11)) {
        printf("O cardápio inserido é inválido! Insira os números corretos.\n");
        return;
    }
    
    // Realiza o cálculo e imprime as calorias da refeição.
    printf("Calorias da refeição: %d", (arr[prato] + arr[sobremesa] + arr[bebida]));
    
}
