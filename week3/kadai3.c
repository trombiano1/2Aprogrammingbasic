#include <stdio.h>
#include <math.h>

double f(double);
double dfdx(double);
double newton(double);

double hitotsumaeno_x = 0.0;
/*グローバル変数なぞ使わずとももっと良いやり方があるのでしょうが思いつきませんでした(;_;)*/

int main() {
  double x0 = 1.0;
  double solution = newton(x0);
  printf("solution is %f\n", solution);
  return 0;
}

double newton(double x){
  if(fabs(hitotsumaeno_x - x)<0.01){
    return x-f(x)/dfdx(x);
  }else{
    hitotsumaeno_x = x;
    return newton(x-f(x)/dfdx(x));
  }
}

double f(double x){
  return exp(x)+x;
}

double dfdx(double x){
  double h=0.00001;
  return (f(x+h)-f(x))/h;
}
