#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int NotasUsadas[8] = {0,0,0,0,0,0,0,0};

int calcularCedulas(){
    return 0;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //  **  // Variáveis:  //  **  //

    int Clients[50][3];// 0 - senha; 1 - nDaConta; 2 - Saldo
    //int Cedulas[8] = {200, 100, 50, 20, 10, 5, 2, 1};
    int Cedulas[2][8] = {{200, 100, 50, 20, 10, 5, 2, 1},{20,30,40,50,60,70,80,90}};// 0 = Cedulas; 1 - Quant Disponível
    int CedulasBackup[2][8] = {{200, 100, 50, 20, 10, 5, 2, 1},{20,30,40,50,60,70,80,90}};
    int parar = 0, acao = -1, registros = 0, acessar = -1, valido = 0, quantia = 0;
    int tempn = 0, tempsenha = 0, tempSaldo = 0;

    //  **  // Variáveis:  //  **  //

    //  **  // Funções:  //  **  //

    int registrarCliente(int Senha1, int nDaConta1, int Saldo1, int index) {

        for(int i = 0; i < 50; i++) {
            if(Clients[index][1] == nDaConta1) {
                return 0;
            }
        }

        if(Clients[index][1] != nDaConta1) {
            Clients[index][1] = nDaConta1;
            Clients[index][2] = Saldo1;
            Clients[index][0] = Senha1;
        }
        else{
            return 0;
        }

        return 1;
    }

    void sacar(int saqueQuant,int saqueQuantCopy, int index) {

        for(int i = 0; i < 8; i++) {
            if(saqueQuant >= Cedulas[0][i]  && Cedulas[1][i] > 0) {
                //NotasUsadas[i] = saqueQuant / Cedulas[0][i];
                //Clients[index][2] -= NotasUsadas[i] * Cedulas[0][i];
                //saqueQuant -= Cedulas[0][i];
                //Cedulas[1][i]--;
                do{
                    if(saqueQuant >= Cedulas[0][i]) {
                        saqueQuant = saqueQuant - Cedulas[0][i];
                        Cedulas[1][i]--;
                        NotasUsadas[i]++;
                        //Clients[index][2] -= NotasUsadas[i] * Cedulas[0][i];
                    }
                } while(Cedulas[1][i] > 0);
            }
            else{
                continue;
            }
        }
        int tempValue = 0;
        for(int i = 0; i < 8; i++) {
            tempValue += (Cedulas[0][i] * (CedulasBackup[1][i] - Cedulas[1][i]));
        }
        Clients[index][2] -= tempValue;
        if(tempValue < saqueQuantCopy) {
            printf("O caixa eletrônico não foi capaz de suprir o saque. Foi sacado apenas: R$%d\n", tempValue);
        }
        
        printf("-------------------------------\n");
        printf("Notas usadas: \n");
        for(int i = 0; i < 8; i++) {
            if(NotasUsadas[i] != 0) {
                printf("%dx R$%d\n", NotasUsadas[i], Cedulas[0][i]);
            }
        }
        printf("-------------------------------\n");
    }

    void alterarSaldo(int nDaConta1, int acao, int saldo1, int index) {
        // 1 = Depositar
        // 0 = Sacar

        if(acao == 1) {
            Clients[index][2] += saldo1;
        }
        else if(acao == 0) {
            sacar(saldo1, saldo1, index);
        }
    }

    void imprimirDados(int i) {
        printf("---------------------------------------\n");
        printf("ID da conta: %d \n", Clients[i][1]);
        printf("Saldo da conta: %d \n", Clients[i][2]);
        printf("---------------------------------------\n");
    }

    //  **  // Funções:  //  **  //



    for(int i = 0; i < 50; i++) {
        inicioDosRegistros:
        if (registros != 0) {
            printf("Deseja continuar com os registros? Digite 0 para continuar ou 1 para parar.\n");

            scanf("%d", &parar);
            if(parar == 1) {
                break;
            }
        }

        printf("Digite o número da conta:\n");
        scanf("%d", &tempn);
        printf("Digite a senha da conta: \n");
        scanf("%d", &tempsenha);
        printf("Digite o saldo da conta: \n");
        scanf("%d", &tempSaldo);

        if(registrarCliente(tempsenha, tempn, tempSaldo, i) == 1) {
            printf("Conta registrada com sucesso.\n");
            registros++;
        }else {
            printf("Número da conta já registrado, digite outro.\n");
            goto inicioDosRegistros;
        }
    }

    while(1) {
        acessoPrint: printf("Deseja acessar o banco de dados? Digite 0 para NÃO, 1 Para VISUALIZAR o saldo ou 2 para ALTERAR o saldo:\n");
        scanf("%d", &acessar);
        if(acessar == 0) {
            printf("---------------------------------------\n");
            printf("Programa finalizado, Até a próxima!\n");
            printf("---------------------------------------\n");
            break;
        }

        if(acessar == 1) {
            printf("Digite o número da conta que deseja acessar:\n");
            scanf("%d", &tempn);
            printf("Digite a senha da conta:\n");
            scanf("%d", &tempsenha);

            for(int i = 0; i < registros; i++) {
                if(Clients[i][1] == tempn && Clients[i][0] == tempsenha) {
                    valido++;
                    imprimirDados(i);
                    break;
                }
            }

            if(valido == 0) {
                printf("Os dados estão incorretos, deseja tentar novamente? 1 - SIM, 0 - NÃO.\n");
                scanf("%d", &acessar);
                if(acessar >= 0 && acessar <= 1) {
                    goto acessoPrint;
                } else {
                    break;
                }
            }
            if(valido == 1) {
                valido--;
            }
        }
        else if(acessar == 2) {
            printf("Digite o número da conta:\n");
            scanf("%d", &tempn);
            printf("Digite a senha da conta: \n");
            scanf("%d", &tempsenha);
            printf("Deseja sacar ou depositar? 1 - Depositar, 0 - Sacar.\n");
            scanf("%d", &acao);
            printf("Digite a quantia: \n");
            scanf("%d", &quantia);

            for(int i = 0; i < registros; i++) {
                if(Clients[i][1] == tempn && Clients[i][0] == tempsenha && acao >= 0 && acao <= 1) {
                    alterarSaldo(tempn, acao, quantia, i);
                    if(Clients[i][2] >= 0) {
                        printf("Saldo alterado! Novo saldo: %d\n", Clients[i][2]);
                    } else {
                        printf("Saldo alterado! O novo saldo é negativo, e portanto você agora está em débito. Novo saldo: %d\n", Clients[i][2]);
                    }
                    goto acessoPrint;
                }else if(Clients[i][0] != tempsenha){
                    printf("Não foi possível realizar esta ação, a senha está INCORRETA!\n");
                    goto acessoPrint;
                }
            }

        }
    }

    return 0;
}