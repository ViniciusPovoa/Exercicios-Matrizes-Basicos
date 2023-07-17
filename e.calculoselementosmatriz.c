#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, mat[2][2], soma;

    printf("Digite os valores da Matriz\n");
    for(i = 0; i < 2; i++){
        for(j=0; j < 2; j++){
            printf("Matriz [%d] [%d]\n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("A matriz digitada foi : \n");
    for(i = 0; i < 2; i++){
        for(j=0; j < 2; j++){
            printf(" %d", mat[i][j]);
        }
        printf("\n");
    }
    printf("==== CALCULO DA SOMA ====\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            soma = soma + mat[i][j];
        }
    }
    printf("Soma = %d\n", soma);
}