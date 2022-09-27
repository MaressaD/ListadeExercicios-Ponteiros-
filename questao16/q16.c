#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void order(float *num,int n);
int comp_grow(const void *num1,const void *num2);
int comp_grow2(int num1,int num2);
void order2(float *num,int size,int (*func_comp)(int num1,int num2));

int main(void){
    int i,j,n;
    float *valores1,*valores2,*valores3;
    double tempo1= 0.0,tempo2= 0.0,tempo3 = 0.0;

    do{
        printf("Quantos valores deseja ordenar: \n");
        scanf("%d", &n);
    }while(n<=0);

    valores1 = malloc(n*sizeof(float));
    valores2 = malloc(n*sizeof(float));
    valores3 = malloc(n*sizeof(float));

    for(int i = 0; i < n; i++) {
        printf("\nDigite o valor da posicao %d:", i);
        scanf("%f", &valores1[i]);
        valores2[i] = valores1[i];
        valores3[i] = valores1[i];
    }


    //ti1 = time(NULL);
    clock_t ti1 = clock();
    for(i=0;i<50000;i++){
        for(j=0;j<50000;j++){

        }
        }
    order(valores1,n);
    clock_t tf1 = clock();
    tempo1 += (double)(tf1 - ti1) / CLOCKS_PER_SEC;



    clock_t ti2 = clock();
    for(i=0;i<50000;i++){
        for(j=0;j<50000;j++){

        }
        }
    qsort(valores2,n,sizeof(float),comp_grow);
    clock_t tf2 = clock();
    tempo2 += (double)(tf2 - ti2) / CLOCKS_PER_SEC;

    clock_t ti3 = clock();
    for(i=0;i<50000;i++){
        for(j=0;j<50000;j++){

        }
        }
    order2(valores3,n,comp_grow2);
    clock_t tf3 = clock();
    tempo3 += (double)(tf3 - ti3) / CLOCKS_PER_SEC;

    printf("\nO tempo gasto pelo primeiro programa:  %f s\n",tempo1);
    //printf("\nTempo: %f s\n",tempo1);
    printf("Tempo: %f s\n",tempo2);
    printf("Tempo: %f s\n",tempo3);

    free(valores1);
    free(valores2);
    free(valores3);
    return 0;
}

int comp_grow(const void *num1,const void *num2){ //função de comparação que retorna um valor
    return *(int*)num1-*(int*)num2 ;
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

int comp_grow2(int num1,int num2){
    return (num1)-(num2);
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


