#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int comp_grow(const void *num1,const void *num2);

int main(void) {
    int n;
    float *valores;

    do{
        printf("Quantos valores deseja ordenar: \n");
        scanf("%d", &n);
    }while(n<=0);

    valores = malloc(n*sizeof(int));

    for(int i = 0; i < n; i++) {
        printf("\nDigite o valor da posicao %d:", i);
        scanf("%f", &valores[i]);
    }
    qsort(valores,n,sizeof(float),comp_grow);//função qsort recebe como parametros um ponteiro, o numero de posições desse ponteirom o tamanho do ponteiro e um ponteiro para função q retorna um int

    for(int j=0;j<n;j++){
        printf("\n%.2f ", valores[j]);
    }
    free(valores);
    return 0;
}

int comp_grow(const void *num1,const void *num2){ //função de comparação que retorna um valor
    return *(int*)num1-*(int*)num2 ;
}
