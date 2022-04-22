#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome;
    float p1, p2, med,temp = 0;
    
    for (int i=1; i<=15; i++){
        
        printf("Digite o nome: \n");
        scanf("%s", &nome);
        printf("Digite a nota da primeira prova: \n");
        scanf("%f", &p1);
        printf("Digite a nota da segunda prova: \n");
        scanf("%f", &p2);
        printf("Média do aluno: %.2f \n", ((p1 + p2) / 2));
        
        med=(p1 + p2);
        temp += 2;
        
    }
    printf("Temp: %f \n", temp);
    printf("Média total da turma: %.2f", med / temp);
    
    return 0;
}
