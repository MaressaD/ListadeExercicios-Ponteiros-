#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void order(float *num,int n);
int comp_grow(float *num1,float *num2);

int main(void) {
  unsigned int n,menor;
  float *valores;

  do{
    printf("Quantos valores deseja ordenar: \n");
    scanf("%d", &n);
  }while(n==0);

  valores = malloc(n*sizeof(int));

  for(int i = 0; i < n; i++) {
    printf("\nDigite o valor da posicao %d:", i);
    scanf("%f", &valores[i]);
  }
  myqsort(valores,n,sizeof(float),comp_grow);

  for(int j=0;j<n;j++){
    printf("\n%.2f ", valores[j]);
  }
  free(valores);
  return 0;
}

int comp_grow(float *num1,float *num2){
    return (*num1)-(*num2);
}

void myqsort(void *vetor,size_t n,size_t tam,int (*func_comp)(const void*,const void*)){



}

