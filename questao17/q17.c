#include <stdio.h>
#include <stdlib.h>

void soma_vetor(int *vetor1,int *vetor2,int *vetor3,int size);

int main(void) {
  unsigned int n,i;
  int *vetorA,*vetorB,*vetorR;

    do{
        printf("Qual tamanho dos vetores que deseja somar \n");
        scanf("%d", &n);
    }while(n<=0);

    vetorA = malloc(n*sizeof(int));
    vetorB = malloc(n*sizeof(int));
    vetorR = malloc(n*sizeof(int));

    for( i = 0; i < n; i++) {
        printf("\nDigite o valor da posicao %d do vetorA: ", i);
        scanf("%d", &vetorA[i]);
    }
    printf("\n");
    for( i = 0; i < n; i++) {
        printf("\nDigite o valor da posicao %d do vetorB: ", i);
        scanf("%d", &vetorB[i]);
    }

    soma_vetor(vetorA,vetorB,vetorR,n);

    printf("\nVetor resultante de Vetor A - Vetor B:\n [");

    for(int j=0;j<n-1;j++){
        printf("%d, ", vetorR[j]);
    }
    printf("%d]\n",vetorR[n-1]);

    free(vetorA);
    free(vetorB);
    free(vetorR);
    return 0;
}

void soma_vetor(int *vetor1,int *vetor2,int *vetor3,int size){
    int i;
    for(i=0;i<size;i++){
        vetor3[i] = vetor1[i]+ vetor2[i];
    }
};




