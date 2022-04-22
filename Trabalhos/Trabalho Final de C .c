#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

typedef struct{
    char nome[128];
    int valor;
    int periodoDeLocacao; // Contado em dias
} Locadora;

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

int FitasCadastradas = 0;
int DvDsCadastrados = 0;
Locadora FitasDeVideo[256];
Locadora DvDs[256];

int Cadastro(char nome[128], int valor, int periodoDeLocacao, int tipo) {
    if(tipo != 0 && tipo != 1) {
        return -1;
    }

    if(tipo == 0) {
        if(FitasCadastradas == 0) {
            strcpy(FitasDeVideo[0].nome, nome);
            FitasDeVideo[0].valor = valor;
            FitasDeVideo[0].periodoDeLocacao = periodoDeLocacao;
            FitasCadastradas++;
            return 2147483647;
        }else{
            for(int i = 0; i < FitasCadastradas; i++) {
                if(compararString(FitasDeVideo[i].nome, nome) == 0) {
                    return FitasDeVideo[i].periodoDeLocacao;
                }
            }
            strcpy(FitasDeVideo[FitasCadastradas].nome, nome);
            FitasDeVideo[FitasCadastradas].valor = valor;
            FitasDeVideo[FitasCadastradas].periodoDeLocacao = periodoDeLocacao;
            FitasCadastradas++;
            return 2147483647;
        }
    } else {
        if(DvDsCadastrados == 0) {
            strcpy(DvDs[0].nome, nome);
            DvDs[0].valor = valor;
            DvDs[0].periodoDeLocacao = periodoDeLocacao;
            DvDsCadastrados++;
            return 2147483647;
        }else {
            for(int i = 0; i < DvDsCadastrados; i++) {
                if(compararString(DvDs[i].nome, nome) == 0) {
                    return DvDs[i].periodoDeLocacao;
                }
            }
            strcpy(DvDs[DvDsCadastrados].nome, nome);
            DvDs[DvDsCadastrados].valor = valor;
            DvDs[DvDsCadastrados].periodoDeLocacao = periodoDeLocacao;
            DvDsCadastrados++;
            return 2147483647;
        }
    }

    return -1;
}

int AlterarDado(char nome[128], int tipo) {
    int tempValidCheck = 0;
    int tempIndex = 0;
    int tempInformacao = 0;
    if(tipo == 0) {
        for(int i = 0; i < FitasCadastradas; i++) {
            if(compararString(FitasDeVideo[i].nome, nome) == 0) {
                tempValidCheck = 1;
                tempIndex = i;
                break;
            }
        }

        if(tempValidCheck == 1) {
            getInfoType: printf("Digite o tipo de informação que deseja alterar (1 - Nome; 2 - Valor; 3 - Período de locação): \n");
            scanf("%d", &tempInformacao);
            if(tempInformacao == 1) {
                printf("Digite o novo nome da fita: \n");
                setbuf(stdin, NULL);
                fgets(FitasDeVideo[tempIndex].nome, 128, stdin);
                printf("Nome da fita alterado com sucesso!\n");
                FitasDeVideo[tempIndex].nome[strlen(FitasDeVideo[tempIndex].nome)-1] = '\0';
            }else if(tempInformacao == 2) {
                printf("Digite o novo valor da fita: \n");
                scanf("%d", &FitasDeVideo[tempIndex].valor);
                printf("Valor da fita alterado com sucesso!\n");
            }else if(tempInformacao == 3) {
                printf("Digite o novo período de locação da fita: \n");
                scanf("%d", &FitasDeVideo[tempIndex].periodoDeLocacao);
                printf("Período de locação da fita alterado com sucesso!\n");
            }else {
                printf("Tipo de informação inválido!\n");
                goto getInfoType;
            }
        }else {
            printf("A fita não foi encontrada no banco de dados.\n");
            return -1;
        }
    }else {
        for(int i = 0; i < DvDsCadastrados; i++) {
            if(compararString(DvDs[i].nome, nome) == 0) {
                tempValidCheck = 1;
                tempIndex = i;
                break;
            }
        }

        if(tempValidCheck == 1) {
            getInfoType2: printf("Digite o tipo de informação que deseja alterar (1 - Nome; 2 - Valor; 3 - Período de locação): \n");
            scanf("%d", &tempInformacao);
            if(tempInformacao == 1) {
                printf("Digite o novo nome do DvD: \n");
                setbuf(stdin, NULL);
                fgets(DvDs[tempIndex].nome, 128, stdin);
                DvDs[tempIndex].nome[strlen(DvDs[tempIndex].nome)-1] = '\0';
                printf("Nome alterado com sucesso!\n");
            }else if(tempInformacao == 2) {
                printf("Digite o novo valor do DvD: \n");
                scanf("%d", &DvDs[tempIndex].valor);
                printf("Valor alterado com sucesso!\n");
            }else if(tempInformacao == 3) {
                printf("Digite o novo período de locação do DvD: \n");
                scanf("%d", &DvDs[tempIndex].periodoDeLocacao);
                printf("Período de locação do DvD alterado com sucesso!\n");
            }else {
                printf("Tipo de informação inválido!\n");
                goto getInfoType2;
            }
        } else {
            printf("O DvD não foi encontrado no banco de dados.\n");
        }
    }

    return -1;
}

void Excluir(char nome[128], int tipo) {
    int tempSuccessCheck = 0;
    if(tipo == 0) {
        for(int i = 0; i < FitasCadastradas; i++) {
            if(compararString(FitasDeVideo[i].nome, nome) == 0) {
                strcpy(FitasDeVideo[i].nome, "FITA EXCLUIDA 152835128512582152835114126121283ser8gwr8g1we8g1w8312831w8f1w8ef1w8ef238213747");
                FitasDeVideo[i].valor = 0;
                FitasDeVideo[i].periodoDeLocacao = '\0';
                tempSuccessCheck = 1;
                break;
            }
        }
        if (tempSuccessCheck == 1) {
            printf("Fita excluida com sucesso do banco de dados.\n");
        }

    }else if(tipo == 1) {
        for(int i = 0; i < DvDsCadastrados; i++) {
            if(compararString(DvDs[i].nome, nome) == 0) {
                strcpy(DvDs[i].nome, "DvD EXCLUIDO 952835128511562152835114126121283ser8gwr8g1weFg1w8312831w8f1w8ef1w8ef238213743");
                DvDs[i].valor = '\0';
                DvDs[i].periodoDeLocacao = '\0';
                tempSuccessCheck = 1;
                break;
            }
        }
        if(tempSuccessCheck == 1) {
            printf("DvD excluido com sucesso do banco de dados.\n");
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int acao = 0, tempValor = 0, tempPeriodo = 0, tempTipo = -1;
    char tempNome[128];
    while (1) {

        printf("------------------------------------------------------------\n");
        printf(" *~* Terminal Locadora - Comandos *~*\n\n");
        printf("* Digite 0 para finalizar o programa.\n");
        printf("* Digite 1 para cadastrar uma fita ou DvD no banco de dados.\n");
        printf("* Digite 2 para realizar uma pesquisa no banco de dados.\n");
        printf("* Digite 3 para alterar alguma informação no banco de dados.\n");
        printf("* Digite 4 para excluir fitas ou DvDs do banco de dados.\n\n");
        printf("------------------------------------------------------------\n");

        acao1: scanf("%d", &acao);
        if(acao != 0 && acao != 1 && acao != 2 && acao != 3 && acao != 4) {
            printf("A opção selecionada não existe, por favor digite novamente:\n");
            goto acao1;
        }

        if(acao == 0) {
            printf("------------------------------------------------------------\n");
            printf("Programa finalizado, até a próxima!\n");
            printf("------------------------------------------------------------\n");
            break;
        }

        if(acao == 1) {
            printf("Digite o tipo que deseja alocar (0 - Fita de Vídeo; 1 - DvD): \n");
            pedirTipo: scanf("%d", &tempTipo);
            if(tempTipo != 0 && tempTipo != 1) {
                printf("O tipo digitado é inválido, por favor digite novamente: \n");
                goto pedirTipo;
            }
            printf("Digite o nome %s: \n", (tempTipo == 0? "da fita":"do DvD"));
            setbuf(stdin, NULL);
            fgets(tempNome, 128,stdin);
            tempNome[strlen(tempNome)-1] = '\0';
            printf("Digite o valor %s: \n", (tempTipo == 0? "da fita":"do DvD"));
            scanf("%d", &tempValor);
            printf("Digite o período (Em dias) pelos quais %s será %s:\n", (tempTipo == 0?"a fita":"o DvD"), (tempTipo == 0?"alocada":"alocado"));
            scanf("%d", &tempPeriodo);

            int estado = Cadastro(tempNome, tempValor, tempPeriodo, tempTipo);
            if(estado != 2147483647) {
                printf("\n------------------------------------------------------------------------------------------------------------------\n");
                printf("Oops! %s \"%s\" que você tentou alocar não está disponível! Mas não se preocupe, pois estará disponível em %d dias.\n", (tempTipo == 0?"a fita":"o DvD"), tempNome, estado);
                printf("------------------------------------------------------------------------------------------------------------------\n\n\n");
            }else {
                printf("%s \"%s\" foi %s com sucesso!\n\n\n", (tempTipo == 0?"A fita":"O DvD"), tempNome, (tempTipo == 0?"alocada":"alocado"));
            }
        }

        if(acao == 2) {
            printf("Digite o tipo que deseja procurar no banco de dados (0 - Fita de Vídeo; 1 - DvD):\n");
            pedirTipo2: scanf("%d", &tempTipo);
            if(tempTipo != 0 && tempTipo != 1) {
                printf("O tipo digitado é inválido, por favor digite novamente: \n");
                goto pedirTipo2;
            }
            int templocalizarCheck2 = 0;

            if(tempTipo == 0) {
                printf("Digite o nome da fita que deseja procurar no banco de dados.\n");
                setbuf(stdin, NULL);
                fgets(tempNome, 128, stdin);
                tempNome[strlen(tempNome)-1] = '\0';

                for(int i = 0; i < FitasCadastradas; i++) {
                    if(compararString(FitasDeVideo[i].nome, tempNome) == 0) {
                        printf("\n\n-----------------------------------------------\n");
                        printf("Fita encontada no banco de dados! As informações serão mostradas abaixo:\n");
                        printf("Nome: %s\n", FitasDeVideo[i].nome);
                        printf("Preço da fita: R$%d\n", FitasDeVideo[i].valor);
                        printf("Período de locação da fita (em dias): %d\n", FitasDeVideo[i].periodoDeLocacao);
                        printf("-----------------------------------------------\n\n");
                        templocalizarCheck2 = 1;
                        break;
                    }
                }
                if(templocalizarCheck2 == 0) {
                    printf("-----------------------------------------------\n");
                    printf("Não foi possível localizar esta fita no banco de dados!\n");
                    printf("-----------------------------------------------\n");
                }

            }else {
                printf("Digite o nome do DvD que deseja procurar no banco de dados: \n");
                setbuf(stdin, NULL);
                fgets(tempNome, 128, stdin);
                tempNome[strlen(tempNome)-1] = '\0';

                for(int i = 0; i < DvDsCadastrados; i++) {
                    if(compararString(DvDs[i].nome, tempNome) == 0) {
                        printf("\n\n-----------------------------------------------\n");
                        printf("DvD encontado no banco de dados! As informações serão mostradas abaixo:\n");
                        printf("Nome: %s\n", DvDs[i].nome);
                        printf("Preço do DvD: R$%d\n", DvDs[i].valor);
                        printf("Período de locação do DvD (em dias): %d\n", DvDs[i].periodoDeLocacao);
                        printf("-----------------------------------------------\n\n");
                        templocalizarCheck2 = 1;
                        break;
                    }
                }
                if(templocalizarCheck2 == 0) {
                    printf("-----------------------------------------------\n");
                    printf("Não foi possível localizar este DvD no banco de dados!\n");
                    printf("-----------------------------------------------\n");
                }
            }
        }

        if(acao == 3) {
            printf("Digite o tipo do objeto o qual deseja alterar informações no banco de dados (0 - Fita de Vídeo; 1 - DvD):\n");
            pedirTipo3: scanf("%d", &tempTipo);
            if(tempTipo != 0 && tempTipo != 1) {
                printf("O tipo digitado é inválido, por favor digite novamente: \n");
                goto pedirTipo3;
            }

            if(tempTipo == 0) {
                printf("Digite o nome da fita que deseja modificar no banco de dados:\n");
                setbuf(stdin, NULL);
                fgets(tempNome, 128, stdin);
                tempNome[strlen(tempNome)-1] = '\0';
                AlterarDado(tempNome, tempTipo);

            }else if(tempTipo == 1) {
                printf("Digite o nome do DvD que deseja modificar no banco de dados:\n");
                setbuf(stdin, NULL);
                fgets(tempNome, 128, stdin);
                tempNome[strlen(tempNome)-1] = '\0';
                AlterarDado(tempNome, tempTipo);
            }
        }

        if(acao == 4) {
            printf("Digite o tipo do objeto o qual deseja excluir banco de dados (0 - Fita de Vídeo; 1 - DvD):\n");
            pedirTipo4: scanf("%d", &tempTipo);
            if(tempTipo != 0 && tempTipo != 1) {
                printf("O tipo digitado é inválido, por favor digite novamente: \n");
                goto pedirTipo4;
            }
            printf("Digite o nome %s que deseja excluir do banco de dados: \n", (tempTipo == 0? "da fita":"do DvD"));
            printf("NOTA: ESTA OPERAÇÃO NÂO PODE SER DESFEITA.\n");
            setbuf(stdin, NULL);
            fgets(tempNome, 128, stdin);
            tempNome[strlen(tempNome)-1] = '\0';
            Excluir(tempNome, tempTipo);
        }
    }
    return 0;
}
