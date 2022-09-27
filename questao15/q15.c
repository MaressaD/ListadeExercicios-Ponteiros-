#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void order2(float *num,int size,int (*func_comp)(int num1,int num2));
int comp_grow2(int num1,int num2);

int main(void) {
    int n;
    float *valores;

    do{
        printf("Quantos valores deseja ordenar: \n");
        scanf("%d", &n);
    }while(n<=0);

    valores = malloc(n*sizeof(float));

    for(int i = 0; i < n; i++) {
        printf("\nDigite o valor da posicao %d:", i);
        scanf("%f", &valores[i]);
    }
    order2(valores,n,comp_grow2);

    for(int j=0;j<n;j++){
        printf("\n%.2f", valores[j]);
    }
    free(valores);
    return 0;
}

void order2(float *num,int size,int (*func_comp)(int num1,int num2)){
    int i;
    float aux,aux2;
    bool troca;
        do{
            troca = false;
            for (i = 0; i < size-1; i++) {
                aux = func_comp((int)num[i],(int)num[i+1]);
                if (aux>0){
                    aux2=num[i];
                    num[i]=num[i+1];
                    num[i+1]=aux2;
                    troca = true;
                }
            }
      }while(troca);
}

int comp_grow2(int num1,int num2){
    return (num1)-(num2);
}

