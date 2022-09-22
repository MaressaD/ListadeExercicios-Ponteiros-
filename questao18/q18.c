#include <stdio.h>
#include <stdlib.h>

void soma_vetor(int *vetor1,int *vetor2,int *vetor3,int size);
void produto_matriz(int *matrizA,int *matrizB,int *matrizC,int nlinha,int ncolunaA, int ncolunaB);

int main(void) {
  unsigned int nlA,nlB,ncA,ncB,i;
  int *matA,*matB,*matC;

 // ncA==nlB;
    do{
        printf("Qual tamanho dos vetores que deseja somar \n");
        scanf("%d", &n);
    }while(n<=0);

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

 /*   for( i = 0; i < n; i++) {
        printf("\nDigite o valor da posicao %d do vetorA: ", i);
        scanf("%d", &vetorA[i]);
    }
    printf("\n");
    for( i = 0; i < n; i++) {
        printf("\nDigite o valor da posicao %d do vetorB: ", i);
        scanf("%d", &vetorB[i]);
    }*/

    produto_matriz(matA,matB,matC,nl,ncA,ncB);

    printf("\nVetor resultante de Vetor A - Vetor B:\n [");

    /*for(int j=0;j<n-1;j++){
        printf("%d, ", vetorR[j]);
    }
    printf("%d]\n",vetorR[n-1]);*/

     for (i = 0; i < nlA; i++){
        free(matA[i]);
        free(matC[i]);
    }
    for (i = 0; i < nlC; i++){
        free(matB[i]);
    }

    free(matA);
    free(matB);
    free(matC);

    return 0;
}

void produto_matriz(int *matrizA,int *matrizB,int *matrizC,int nlinha,int ncolunaA, int ncolunaB){
    int i,j,k;
    for(i=0;i<nlinha;i++){
        for(j=0;j<ncolunaB;j++){
            for(k=0,j<ncolunaA;k++){
                matrizC[i][j] = matrizC[i][j] + (matrizA[i][k]*matrizB[k][j]);
            }
        }
    }
};




