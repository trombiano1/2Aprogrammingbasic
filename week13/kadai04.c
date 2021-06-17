#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[]){
	float q;
	int nstep;
	int step = 0;
	int distance = 0;
	q = atof(argv[1]);
	nstep = atoi(argv[2]);
	srand((unsigned int)time(NULL));

	for(int i = 0; i < nstep; i++){
		if(i%2 == 1){ //奇数
			if((double)rand()/((double)RAND_MAX) > 0.5){
				distance--;
				step++;
			} else {
				distance++;
				step++;
			}
		} else { //偶数
			if((double)rand()/((double)RAND_MAX) < q){
				distance++;
				step++;
			} else {
			}
		}
	}
	printf("%f\n",(double)distance/(double)step);
}
