#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void order(float *num,int size,float (*compara)(float num1,float num2));
float comp_grow(float num1,float num2);

int main(void) {
    unsigned int n,menor;
    float *valores;

    do{
        printf("Quantos valores deseja ordenar: \n");
        scanf("%d", &n);
    }while(n==0);

    valores = malloc(n*sizeof(float));

    for(int i = 0; i < n; i++) {
        printf("\nDigite o valor da posicao %d:", i);
        scanf("%f", &valores[i]);
    }
    order(valores,n,comp_grow);

    for(int j=0;j<n;j++){
        printf("\n%f", valores[j]);
    }
    free(valores);
    return 0;
}

void order(float *num,int size,float (*compara)(float num1,float num2)){
    int i;
    float aux,aux2;
    bool troca;
        do{
            troca = false;
            for (i = 0; i < size-1; i++) {
                aux = compara(num[i],num[i+1]);
                if (aux>0){
                    aux2=num[i];
                    num[i]=num[i+1];
                    num[i+1]=aux2;
                    troca = true;
                }
            }
      }while(troca);
}

float comp_grow(float num1,float num2){
    return (num1)-(num2);
}
