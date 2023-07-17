#include <stdio.h>
#include <stdlib.h>
//Vinícius Horácio Marques Póvoa

int main()
{

 int iA, jA, iB, jB;
 int i, j, k1, k2,a,b;


 printf("Qual a quantidade de linhas da sua matriz A?");
 scanf("%d", &iA);

 printf("Qual a quantidade de colunas da sua matriz A?");
 scanf("%d", &jA);

 printf("Qual a quantidade de linhas da sua Matriz B?");
 scanf("%d", &iB);

 printf("Qual a quantidade de colunas da sua Matriz B?");
 scanf("%d", &jB);

  float A[iA][jA];
  float B[iB][jB];
  float C[iA][jB];
  float temp;

  if(jA != iB){
        printf("A multiplicacao nao pode ser feita\n");
        printf("Numero de colunas da matriz A eh diferente do numero de linhas da matriz B\n");
        return 0;
    }


    printf("\nDigite os elementos da Matriz A\n\n");

    for(i=0;i<iA;i++)
    {
        for(j=0;j<jA;j++)
        {
            printf("A[%d][%d] = ",i+1,j+1);
            scanf("%f",&A[i][j]);
        }
    }


    printf("\nDigite os elementos da Matriz B\n\n");

    for(i=0;i<iB;i++)
    {
        for(j=0;j<jB;j++)
        {
            printf("B[%d][%d] = ",i+1,j+1);
            scanf("%f",&B[i][j]);
        }
    }

 printf("\n\n**************SAIDA DE DADOS**************\n\n");

 printf("A matriz A eh  \n \n :");
    for(i=0;i<iA;i++)
    {
        for(j=0;j<jA;j++)
        {
            if(j!=(jA-1))
                printf("%.2f \t",A[i][j]);

            else
                printf("%.2f \n",A[i][j]);
        }
    }

printf("A matriz B eh  \n \n :");
    for(i=0;i<iB;i++)
    {
        for(j=0;j<jB;j++)
        {
            if(j!=(jB-1))
                printf("%.2f \t",B[i][j]);

            else
                printf("%.2f \n",B[i][j]);
        }
    }

for(k1=0;k1<iA;k1++)
    {
        for(k2=0;k2<jB;k2++)
        {
            temp=0.0;
            for(i=0;i<iA;i++)
            {
                temp=temp+A[k1][i]*B[i][k2];
            }
            C[k1][k2]=temp;
        }
    }

    printf("\n \n");

    printf("\n A multiplicacao das matrizes A x B =  \n \n");

    for(i=0;i<iA;i++)
    {
        for(j=0;j<jB;j++)
        {
            if(j!=(jB-1))
            {
                printf("%.2f \t",C[i][j]);
            }
            else
            {
                printf("%.2f \n",C[i][j]);
            }
        }
    }

    return 0;

}


