#include <stdio.h>

int main(){
	int var;

	printf("Insert variable:");
		fflush( stdout );
		scanf("%d", &var);
		fflush( stdout );

	if(var > 100){
		printf("%d", var);
	}else{
		var = 0;
		printf("%d", var);
	}

}
