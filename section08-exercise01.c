#include <stdio.h>

int main(){
	int vector[5],even[5], n = 0;

	for(int i = 0; i < 5; i++){
		printf("Input a value for the vector: ");
				fflush(stdout);
				scanf("%d",&vector[i]);
				fflush(stdout);

				if(vector[i] % 2 == 0){
					if(vector[i] > 0){
						even[n] = vector[i];
						n = n + 1;
					}
				}
	}

	for(int i = 0; i < n; i++){
		printf("%d\n", even[i]);

	}
}
