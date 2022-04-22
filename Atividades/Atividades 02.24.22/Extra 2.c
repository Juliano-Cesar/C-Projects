#include <stdio.h>

int main()
{
    int num = 1;
    float divi;
    
    printf("Insira o número da tabuada: ");
    scanf("%d", &num);
    
    divi = num;
    
    //for(num; num<=9; num++){
    
    printf("\n-------------------------------------------\n");
    
    for (int i=1; i<=10; i++){
        
        printf("%d * %d = ", num, i);
        printf("%d \n", (num * i));
        
    }
    
    printf("\n-------------------------------------------\n");
    
    for (int i=1; i<=10; i++){
        
        printf("%d / %d = ", i, num);
        printf("%f \n", (divi / i));
        
    }
    
    printf("\n-------------------------------------------\n");
    
    for (int i=1; i<=10; i++){
        
        printf("%d + %d = ", num, i);
        printf("%d \n", (num + i));
    }
    
    printf("\n-------------------------------------------\n");
    
    for (int i=1; i<=10; i++){
        printf("%d - %d = ", num, i);
        printf("%d \n", (num - i));
    }
    
    printf("\n-------------------------------------------\n");
//}
    return 0;
}
