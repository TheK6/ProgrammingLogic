#include <stdio.h>

int main(){
	int v1[10];

	for(int i = 0; i < 10; i++){
		printf("Insert vector numbers here: ");
			fflush(stdout);
			scanf("%d",&v1[i]);
			fflush(stdout);

	}
	for(int i=9;i >= 0;i--){
			printf("%d\n",v1[i]);

	}
}
