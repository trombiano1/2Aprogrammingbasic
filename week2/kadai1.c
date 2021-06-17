#include <stdio.h>
#include <math.h>
int main(){
  double sum=0.0;
  int n;
  for(n=1;n<1000;n++){
    sum+=(1/(n*n*pow(2,n-1)));
  }
  printf("%f\n",sqrt(6*(sum+log(2)*log(2))));
  return 0;
}
