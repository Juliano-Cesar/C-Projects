#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarar as vari�veis
    char nome[65];
    char ende[45];
    char tel[20];
    
    //Obter os valores
    printf("Digite o nome: \n");
    fgets(nome, 65, stdin);
    printf("Digite o endere�o: \n");
    fgets(ende, 45, stdin);
    printf("Digite o n�mero de telefone: \n");
    fgets(tel, 20, stdin);
    
    //Imprimir os valores
    printf("Nome: %s", nome);
    printf("Endere�o: %s", ende);
    printf("Telefone: %s", tel);
}
