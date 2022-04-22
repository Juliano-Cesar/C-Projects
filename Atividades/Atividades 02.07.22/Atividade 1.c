#include <stdio.h>

int main()
{
    int celsius, num1, num2;
    
    printf("Digite o número: ");
    scanf("%d", &celsius);
    
    num1= (1.8 * celsius)+32;
    
    printf("%d", num1);
}
