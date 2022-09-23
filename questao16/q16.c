#include <stdio.h>
#include <time.h>

int main(void){
    int i,j;
    float tempo;
    time_t ti,tf;
    ti = time(NULL);

    for(i=0;i<50000;i++){
        for(j=0;j<50000;j++){

        }
        }

    tf = time(NULL);

    tempo = difftime(tf,ti);

    printf("Tempo: %f s",tempo);

    return 0;
}
