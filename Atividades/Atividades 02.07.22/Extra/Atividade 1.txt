#include <stdio.h>

int main()
{
    int num;
    
    printf("digite um número: \n");
    scanf("%d", &num);
    printf("numero anterior: %d \n", num - 1);
    printf("numero posterior: %d \n", num + 1);
    
    return 0;
}
