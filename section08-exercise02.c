#include <stdio.h>

int main(){
	int v1[10], v2[10],v3[10];

	for(int i =0; i < 10; i++){
		printf("Insert vector number 1: ");
		fflush(stdout);
		scanf("%d",&v1[i]);
		fflush(stdout);

		printf("Insert vector number 2: ");
				fflush(stdout);
				scanf("%d",&v2[i]);
				fflush(stdout);

		v3[i] = v1[i] + v2[i];

	}
	for(int i = 0; i < 10; i++){
		printf("%d\n", v3[i]);
	}

}
