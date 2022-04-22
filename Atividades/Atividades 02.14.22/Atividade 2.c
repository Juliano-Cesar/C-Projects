#include <stdio.h>

int main()
{
    //Define as variáveis
    int num1, num2;
    
    //Obtém os valores
    printf("Digite o primeiro número: \n");
    scanf("%d", &num1);
    printf("Digite o segundo número: \n");
    scanf("%d", &num2);
    
    //Faz a checagem
    if (num1 + num2 <= 20) {
        printf("%d", (num1+num2)-5);
    }
    else
    {
        printf("%d", (num1+num2)+8);
    }
    
    return 0;
}
