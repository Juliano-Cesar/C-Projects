#include <stdio.h>

int main()
{
    int num1, num2, temp = 0;
    
    printf("Digite o multiplicando: \n");
    scanf("%d", &num1);
    printf("Digite o multiplicador: \n");
    scanf("%d", &num2);
    
    for (int i=1; i<=num2; i++){
        
        temp += num1;
    }
    printf("%d", temp);

    return 0;
}
