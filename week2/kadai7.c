#include <stdio.h>
#include <math.h>
int is_prime(int); /*引数画素数の場合は１，それ以外の場合は0を返す*/
int main(){
  int i;
  int j;
  for(i=2;i<=500;i++){
    for(j=2;j<=(int)i;j++){
      if(is_prime(j)&&is_prime(2*i-j)){
	printf("%d = %d + %d\n",2*i,j,2*i-j);
	break;
      }
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
