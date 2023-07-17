#include <stdio.h>
#include <stdlib.h>


//Vinícius Horácio Marques Póvoa
int main()
{
    int A[2][2] = {0,0,0,0};
    int B[2][2] = {0,0,0,0};
    int C[2][2];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            A[i][j] = (3*(i+1) + 4*(j+1));
            B[i][j] = -(4*(i+1))-(3*(j+1));
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\n Matriz A: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf(" %d", A[i][j]);
        }
        printf("\n");
    }
    printf("\n Matriz B: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf(" %d", B[i][j]);
        }
        printf("\n");
    }
    printf("\n Matriz C: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%2d ", C[i][j]);

        }
         printf("\n");
    }



    return 0;
}
