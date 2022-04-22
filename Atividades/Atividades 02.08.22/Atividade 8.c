#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarar as variáveis
    char nome[65];
    char ende[45];
    char tel[20];
    
    //Obter os valores
    printf("Digite o nome: \n");
    fgets(nome, 65, stdin);
    printf("Digite o endereço: \n");
    fgets(ende, 45, stdin);
    printf("Digite o número de telefone: \n");
    fgets(tel, 20, stdin);
    
    //Imprimir os valores
    printf("Nome: %s", nome);
    printf("Endereço: %s", ende);
    printf("Telefone: %s", tel);
}
