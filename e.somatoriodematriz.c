#include <stdio.h>
#include <stdlib.h>

//Vin�cius Hor�cio Marques P�voa
int main()
{
    int p, q;
    printf("Digite o valor de P: ");
    scanf("%d", &p);

    printf ("\nDigite o valor de Q: ");
    scanf("%d", &q);

    //printf("%d e %d", p, q);

    int m[p][q];
    int i;
    int j;

    for(i=0; i<p; i++){
        for(j=0; j<q; j++){
            printf("\nDigite o valor de [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\n\n SAIDA DE DADOS \n\n");
    for (i=0; i<p; i++){
        for (j=0; j<q; j++){
            printf("\nElemento [%d][%d] = %d\n", i, j, m[i][j]);
        }
    }

   //Calcule o somat�rio dos valores presentes nas linhas da matriz  M  e  armazene  no  vetor  L,
   //sendo  o  somat�rio  de  cada  linha  armazenado  na posi��o respectiva do vetor L.

    int x;
    int L[p];
    int C[q];
    int soma;

    //Soma Linhas

            for(i=0; i<p; i++){
                soma = 0;
                for(j=0; j<q; j++){
                    soma = soma + m[i][j];
                }
                L[i] = soma;
            }

    //Soma Colunas

            for(j=0; j<p; j++){
                soma = 0;
            for(i = 0; i<p; i++){
                    soma = soma + m[i][j];
                }
             C[j] = soma;
            }

     //Sa�da de dados da soma

     printf("\nA Matriz eh:\n");
      for(i=0; i<p; i++){
        for(j=0; j<q; j++){
                printf("%2d ", m[i][j]);
        }
        printf("\n");
      }
      printf("\n\n Vetor com a soma das linhas:\n");
       for(i=0; i<p; i++){
            printf("Linha [%d]: %d\n",i, L[i]);

    }
    printf("\n\n Vetor com a soma das colunas: \n");
         for(j=0; j<q; j++){
          printf("Coluna [%d]: %d\n",j, C[j]);
         }
}


