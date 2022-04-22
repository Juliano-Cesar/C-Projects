#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int converter(int n){
    char temp[128];
    char text[128];
    
    temp[0] = 0;
    text[0] = 0;
    
    if(n != 0){
        sprintf(temp, "%d", n % 2);
        strcat(temp, text);
        strcpy(text, temp);
        
        n -= (n % 2);
        n/=2;
        
        converter(n);
        printf("%s", text);
    }
    else{
        return 0;
    }
}
 
int main()
{
    char bin;
    int num;
    
    
    printf("Digite o número: ");
    scanf("%d", &num);
    
    bin = converter(num);
    printf("%c", bin);
 
    return 0;
}