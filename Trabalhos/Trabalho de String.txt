#include <stdio.h>
#include <locale.h>

typedef struct {
    int senha;
    int nDaConta;
    int Saldo;
} Banco;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //  **  // Variáveis:  //  **  //

    Banco Clientes[50];
    int parar = 0, acao = -1, registros = 0, acessar = -1, valido = 0, quantia = 0;
    int tempn = 0, tempsenha = 0, tempSaldo = 0;

    //  **  // Variáveis:  //  **  //

    //  **  // Funções:  //  **  //

    int registrarCliente(int Senha1, int nDaConta1, int Saldo1, int index) {

        for(int i = 0; i < 50; i++) {
            if(Clientes[i].nDaConta == nDaConta1) {
                return 0;
            }
        }

        if(Clientes[index].nDaConta != nDaConta1) {
            Clientes[index].nDaConta = nDaConta1;
            Clientes[index].Saldo = Saldo1;
            Clientes[index].senha = Senha1;
        }
        else{
            return 0;
        }

        return 1;
    }

    void alterarSaldo(int nDaConta1, int acao, int saldo1, int index) {
        // 1 = Depositar
        // 0 = Sacar

        if(acao == 1) {
            Clientes[index].Saldo += saldo1;
        }
        else if(acao == 0) {
            Clientes[index].Saldo -= saldo1;
        }
    }

    void imprimirDados(int i) {
        printf("---------------------------------------\n");
        printf("ID da conta: %d \n", Clientes[i].nDaConta);
        printf("Saldo da conta: %d \n", Clientes[i].Saldo);
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
                if(Clientes[i].nDaConta == tempn && Clientes[i].senha == tempsenha) {
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
                if(Clientes[i].nDaConta == tempn && Clientes[i].senha == tempsenha && acao >= 0 && acao <= 1) {
                    alterarSaldo(tempn, acao, quantia, i);
                    printf("Saldo alterado! Novo saldo: %d\n", Clientes[i].Saldo);
                    goto acessoPrint;
                }
            }

        }
    }

    return 0;
}
