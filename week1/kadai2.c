#include <stdio.h>
int main(){
	int n=158340421;
	int i;
	for(i=0;i<n;i++){
		if((i+1)*(i+1)*(i+1)>n){
			printf("%d",i);
			break;
		}
	}
	return 0;
}