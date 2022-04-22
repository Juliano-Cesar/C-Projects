#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

typedef struct {
    char nome[32];
    char sobrenome[32];
    char email[128];
    char telmovel[32];
    char telfixo[32];
} Agenda;

int parser(char input[1024]) {
    int tamanho = strlen(input);

    for(int i = 0; i < tamanho; i++) {
        if(!isdigit(input[i])) {
            return 0;
        }
    }

    return atoi(input);
}

int compararString(char a[256], char b[256]) {
    int tamanhoA = strlen(a), tamanhoB = strlen(b);

    if(tamanhoA != tamanhoB) {
        return 1;
    }

    for(int i = 0; i < tamanhoA; i++) {
        if(tolower(a[i]) != tolower(b[i])) {
            return 1;
        }
    }

    return 0;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Agenda agenda[100];
    int contatos = 0, acao = 0;
    char tempPesquisaString[256];

    while(1){
        printf("Digite 0 para continuar com os cadastros ou 1 para cancelar: \n");
        scanf("%d", &acao);

        if(acao == 1) {
            break;
        }

        printf("Digite o nome: \n");
        setbuf(stdin, NULL);
        fgets(agenda[contatos].nome, 32, stdin);
        printf("Digite o sobrenome: \n");
        setbuf(stdin, NULL);
        fgets(agenda[contatos].sobrenome, 32, stdin);
        printf("Digite o número de telefone fixo: \n");
        setbuf(stdin, NULL);
        fgets(agenda[contatos].telfixo, 32, stdin);
        //scanf("%d", &agenda[contatos].telfixo);
        printf("Digite o número de telefone móvel: \n");
        setbuf(stdin, NULL);
        fgets(agenda[contatos].telmovel, 32, stdin);
        //scanf("%d", &agenda[contatos].telmovel);
        printf("Digite o email: \n");
        setbuf(stdin, NULL);
        fgets(agenda[contatos].email, 128, stdin);
        contatos++;

    }

    pergunta1: printf("Deseja acessar o banco de dados? Digite 1 para SIM ou 0 para NÃO:\n");
    scanf("%d", &acao);

    if(acao == 0 || acao == 1) {
        if(acao == 0) {
            printf("-----------------------------------------\n");
            printf("Programa finalizado! Obrigado por usar.\n");
            printf("-----------------------------------------\n");
        }
    } else{
        printf("Número inválido! Tente novamente.\n");
        goto pergunta1;
    }

    while(1) {
        acesso: printf("Digite a informação para pesquisar no banco de dados: \n");
        setbuf(stdin,NULL);
        fgets(tempPesquisaString, 256, stdin);
        for(int i = 0; i < contatos; i++) {
            if(compararString(agenda[i].nome, tempPesquisaString) == 0 || compararString(agenda[i].sobrenome, tempPesquisaString) == 0 || compararString(agenda[i].email, tempPesquisaString) == 0 || compararString(agenda[i].telfixo, tempPesquisaString) == 0 || compararString(agenda[i].telmovel, tempPesquisaString) == 0) {
                printf("-------------------------------------\n");
                printf("Dados encontrados! Serão imprimidos abaixo: \n");
                printf("Nome: %s", agenda[i].nome);
                printf("Sobrenome: %s", agenda[i].sobrenome);
                printf("Telefone fixo: %s", agenda[i].telfixo);
                printf("Telefone móvel: %s", agenda[i].telmovel);
                printf("Email: %s", agenda[i].email);
                printf("-------------------------------------\n");
            }else {
                printf("Informação não encontrada no banco de dados!\n");
                goto acesso;
            }
        }

        printf("Deseja continuar a peesquisa? Digite 1 para SIM ou 0 para NÃO.\n");
        scanf("%d", &acao);

        if(acao == 0) {
            printf("-----------------------------------------\n");
            printf("Programa finalizado! Obrigado por usar.\n");
            printf("-----------------------------------------\n");
            return 0;
        }

        goto acesso;
    }

    return 0;
}
