#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[140];
    
    printf("digite o seu nome: \n");
    fgets(name, 140, stdin);
    printf("nome: %s", name);
    
}
