#include <stdio.h>
#include <stdlib.h>

int soma_vetor(int *vetor,int size);

int main(void){
    int nc,i,*custos,ctotal;
    int (*pont_func)(int*,int); //ponteiro para função;
    nc=5;
    custos = malloc(nc*sizeof(int));

    printf("digite cinco(5) valores de custo:\n");
    for(i=0;i<nc;i++){
        printf("digite o valor %d :\n",i+1);
        scanf("%d",&custos[i]);
    }
    pont_func = soma_vetor; //ponteiro para função recebe a função soma_vetor
    ctotal=pont_func(custos,nc); //o ponteiro para função pont_fun agora pode ser chamado sempre que se desejar usar a função soma_vetor

    printf("O total de custos foi: %d",ctotal);
    free(custos);
    return 0;
}

int soma_vetor(int *vetor,int size){
    int i,soma=0;
    for(i=0;i<size;i++){
        soma=soma+vetor[i];
    }
    return soma;
}
