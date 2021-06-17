#include <stdio.h>
#include <stdlib.h>

int main(void){
  int arraySize = 5;
  int* p;
  p = (int*)malloc(sizeof(int) * arraySize);
  int i;
  for(i=0;i<arraySize;i++){
    p[i] = 2 * i;
  }
  for(i=0;i<arraySize;i++){
    printf("p[%d] = %d\n", i, p[i]);
  }
  free(p);
  return 0;
}
