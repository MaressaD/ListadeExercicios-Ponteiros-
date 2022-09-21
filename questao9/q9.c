#include <stdio.h>

int main(void) {
  char x[4];
  int y[4];
  float z[4];
  double w[4];
  int i;
  for(i=1;i<4;i++){
   printf("\n x+%d (char): %d",i,x+i);
    printf(" y+%d (int): %d",i,y+i);
    printf(" z+%d (float): %d",i,z+i);
    printf(" w+%d (double): %d",i,w+i);
    }
  return 0;
}
