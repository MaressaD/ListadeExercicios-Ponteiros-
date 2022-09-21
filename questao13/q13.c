#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void order(float *num,int n);

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
  order(valores,n);

  for(int j=0;j<n;j++){
    printf("\n%.2f ", valores[j]);
  }
  free(valores);
  return 0;
}

void order(float *num,int n){
  int i;
  float aux;
  bool troca;
  do{
    troca = false;
  for (i = 0; i < n-1; i++) {
    if (num[i] > num[i+1]) {
      aux=num[i];
      num[i]=num[i+1];
      num[i+1]=aux;
      troca = true;
    }
  }
  }while(troca);
}
