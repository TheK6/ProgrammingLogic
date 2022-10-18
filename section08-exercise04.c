#include <stdio.h>

int main(){
	int v1[20], sum = 0;

	for(int i = 0; i < 20; i++){
		printf("Insert the %d/20 number here: ", (i+1));
					fflush(stdout);
					scanf("%d", &v1[i]);
					fflush(stdout);

					sum = sum + v1[i];
	}
	printf("The sum of the numbers are %d:",sum);



}
