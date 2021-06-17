#include <stdio.h>
double sqrt_cf(double);
double K(double, int);

int main() {
  double z = 3;
  double s = sqrt_cf(z); printf("%f\n", s); return 0;
}
double sqrt_cf(double z) {
  return 1.0 + K(z, 0);
}
double K(double z, int depth) {
  /*ここを埋める*/
  if(depth >= 10){
    return z;
  }else{
    return (z-1)/(2+K(z,++depth));
  }
}
