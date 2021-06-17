#include <stdio.h>
#include <math.h>

int mod_apm(int,int,int);

int main(){
   printf("%d\n",mod_apm(541,1234,1299709));
   return 0;
}

int mod_apm(int a, int p, int m){
  if(p==1){
    return a%m;
  }else{
    return mod_apm(a*mod_apm(a,p-1,m),1,m);
  }
}
