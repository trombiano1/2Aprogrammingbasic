#include <stdio.h>
#include <stdlib.h>

void increment(int*);

int main(){
  int a = 10;
  increment(&a);
  printf("%d\n",a);
  return 0;
}
void increment(int *n){
  *n = *n + 1;
}
