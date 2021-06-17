#include <stdio.h>


double legendre(int n, double x){
  if(n==0){
    return 1.0;
  }else if(n==1){
    return x;
  }else{
    return ((2*n-1)*x*legendre(n-1,x)-(n-1)*legendre(n-2,x))/(double)(n);
  }
}
int main() {
  printf("P_16(0.5)=%f\n",legendre(16,0.5));
  printf("P_32(0.7)=%f\n",legendre(32,0.7));
  return 0;
}
