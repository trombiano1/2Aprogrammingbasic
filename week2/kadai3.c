#include <stdio.h>
#include <math.h>
int is_prime(int); /*引数画素数の場合は１，それ以外の場合は0を返す*/
int main(){
  int i;
  for (i=2; i<=1000; i++){
    if (is_prime(i)==1){
      printf("%d is prime\n",i);
    }
  }
}
int is_prime(int n){
  int i;
  for(i=2;i<(int)sqrt(n)+1;i++){
    if(n%i==0){
      return 0;
    }
  }
  return 1;
}
