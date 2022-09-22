#include <stdio.h>
#include <stdlib.h>

void produto_matriz(int **matrizA,int **matrizB,int **matrizC,int nlinhaA,int ncolunaA, int nlinhaB, int ncolunaB);

int main(void) {
  unsigned int nlA,nlB,ncA,ncB,i,j;
  int **matA,**matB,**matC;


    do{
        printf("Insira o numero de linhas da matriz A \n");
        scanf("%d", &nlA);
    }while(nlA<=0);
    do{
        printf("Insira o numero de colunas da matriz A e da matriz B\n");
        scanf("%d", &ncA);
    }while(ncA<=0);
    nlB=ncA;
    do{
        printf("Insira o numero de colunas da matriz A \n");
        scanf("%d", &ncB);
    }while(ncB<=0);

    matA= malloc(nlA*sizeof(int*));
    matB= malloc(nlB*sizeof(int*));
    matC= malloc(nlA*sizeof(int*));

    for (i = 0; i < nlA; i++) {
        matA[i] = malloc(ncA*sizeof(int));
        matC[i] = malloc(ncB*sizeof(int));
    }
     for (i = 0; i < nlB; i++) {
        matB[i] = malloc(ncB*sizeof(int));
    }

     printf("\nDigite o valor para as posições da Matriz A: ");

    for(i=0;i<nlA;i++){
        for(j=0;j<ncA;j++){
        printf("\nPosicao [%d][%d]: ",i,j);
        scanf("%d",&matA[i][j]);
        }
    }

    printf("\nDigite o valor para as posições da Matriz B: ");

    for(i=0;i<nlB;i++){
        for(j=0;j<ncB;j++){
        printf("\nPosicao [%d][%d] : ",i,j);
        scanf("%d",&matB[i][j]);
        }
    }


    produto_matriz(matA,matB,matC,nlA,ncA,nlB,ncB);

    printf("\nMatriz resultante C:\n");

    for(i=0;i<nlA;i++){
        printf(" |");
        for(j=0;j<ncB;j++){
               printf(" %d ",matC[i][j]);
        }
        printf("|");
        printf("\n");
    }


     for (i = 0; i < nlA; i++){
        free(matA[i]);
        free(matC[i]);
    }
    for (i = 0; i < nlB; i++){
        free(matB[i]);
    }

    free(matA);
    free(matB);
    free(matC);

    return 0;
}

void produto_matriz(int **matrizA,int **matrizB,int **matrizC,int nlinhaA,int ncolunaA, int nlinhaB, int ncolunaB){
    int i,j,k;

    for(i=0;i<nlinhaA;i++){
        for(j=0;j<ncolunaB;j++){
                matrizC[i][j]= 0;
        }
    }
    for(i=0;i<nlinhaA;i++){
        for(j=0;j<ncolunaB;j++){
            for(k=0;k<ncolunaA;k++){
                matrizC[i][j] = matrizC[i][j] + (matrizA[i][k]*matrizB[k][j]);
            }
        }
    }
};




