#include <stdio.h>
#include <string.h>

int main()
{
    char nome[128];
    int prov1, prov2, media = 0;
    
    printf("Insira o Primeiro nome do aluno: \n");
    fgets(nome, 128, stdin);
    printf("Insira a nota da prova 1: \n");
    scanf("%d", &prov1);
    printf("Insira a nota da prova 2: \n");
    scanf("%d", &prov2);
    
    media = ((prov1 + prov2) / 2);
    
    printf("Nome do aluno: %s \n", nome);
    printf("Nota da prova 1: %d \n", prov1);
    printf("Nota da prova 2: %d \n", prov2);
    printf("Média das notas: %d \n", media);
    printf("Status do aluno: %s", ((media >= 7) ? "Aprovado" : ((media <= 3) ? "Reprovado" : "Prova Final")));
    
    return 0;
}
