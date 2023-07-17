#include <stdio.h>
#include <stdlib.h>

//Vinícius Horácio Marques Póvoa
//Escreva  um programa que leia uma matriz de tamanho 6x6.
     //Calcule e imprima  a soma dos elementos que estão abaixo da diagonal principal.


   int main()
{
   int mat[6][6];
   int i,j, soma;

   for (i=0; i<6;i++)
    for(j=0; j<6;j++){
    printf("Digite os elementos da matriz\n");
    scanf("%d",&mat[i][j]);
    }

    printf("\n\nAbaixo da diagonal principal:\n");
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if(i > j)
                printf("%2d ", mat[i][j]);

            else
                printf("   ");
        }
        printf("\n");
    }
    printf("\n\n");

   for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
                if(i > j){
    soma = soma + mat[i][j];
    printf("A soma eh : %d ", soma);
            }
        }
   }


    return 0;
}
