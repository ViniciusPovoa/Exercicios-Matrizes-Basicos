#include <stdio.h>
#include <stdlib.h>
//Vinícius Horácio Marques Póvoa

int main()
{
    int matriz[3][10], i, j;

    printf("Digite valor para os elementos da matriz");

    for (i=0; i<3; i++)
        for (j=0; j<10; j++){
            printf("\nElemento [%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }

    printf("\n\n * SAÍDA DE DADOS *");

    for (i=0; i<3; i++)
        for (j=0; j<10; j++){
            printf("\nElemento [%d][%d] = %d\n", i, j, matriz[i][j]);

        }
    printf("\n\n*** NOTA 1 ***\n\n");

    int nota1=0;

    for (j=0; j<10; j++){
        if(matriz[0][j] > matriz[1][j] && matriz[0][j]>matriz[2][j]){
            nota1 = nota1 + 1;
        }
    }

    printf("\nA quantidade de nota 1 maior eh: %d", nota1);

    printf("\n\n*** NOTA 2 ****\n\n");

    int nota2=0;

    for (j=0; j<10; j++){
        if(matriz[1][j] > matriz[0][j] && matriz[1][j]>matriz[2][j]){
            nota2 = nota2 + 1;
        }
    }

    printf("\nA quantidade de nota 2 maior eh: %d", nota2);


    printf("\n\n*** NOTA 3 ****\n\n");

    int nota3=0;

    for (j=0; j<10; j++){
        if(matriz[2][j] > matriz[0][j] && matriz[2][j]>matriz[1][j]){
            nota3 = nota3 + 1;
        }
    }

    printf("\nA quantidade de nota 3 maior eh: %d\n", nota3);



    printf("\n\n*** MAIOR NOTA ****\n\n");

    int maiorNota = matriz[0][0];

    for (i=0; i<3; i++)
        for (j=0; j<10; j++){
                if (matriz[i][j] > maiorNota){
                    maiorNota = matriz[i][j];
                }
        }
    printf("\nA maior nota eh: %d\n", maiorNota);


    int qtdMaiorNota = 0;

    for (j=0; j<10; j++)
        //for (i=0; i<3; i++){
                if (matriz[0][j] == maiorNota || matriz[1][j] == maiorNota || matriz[2][j] == maiorNota){
                    qtdMaiorNota = qtdMaiorNota + 1;
                }
        //}
    printf("\nA Quantidade de Alunos que tiraram a maior nota foi: %d\n\n", qtdMaiorNota);


    return (0);
    system("PAUSE");


}
