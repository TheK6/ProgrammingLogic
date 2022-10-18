#include <stdio.h>

int main(){
	int v1[10];
	char gt50 = 0;

	for(int i = 0; i < 10; i++){
		printf("Insert a number for index %d/10: ", i+1);
			fflush(stdout);
			scanf("%d", &v1[i]);
			fflush(stdout);


	}

			for(int i= 0; i < 10; i++) {
					if(v1[i] > 50){
							printf("Value %d is greater than 50 in position %d\n", v1[i], i);
							gt50 = 1;
					}
			}
			if(gt50 < 1){
				printf("No number greater than 50");
			}
}
