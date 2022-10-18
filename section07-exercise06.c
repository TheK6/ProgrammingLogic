#include <stdio.h>

int main(){
	int n, i;
	printf("Insert number between 1 and 10 here: ");
		fflush( stdout );
		scanf("%d", &n);
		fflush( stdout );


	while(n < 1 || n > 10){
		printf("Only numbers between 1 and 10: ");
			fflush( stdout );
			scanf("%d", &n);
			fflush( stdout );
	}
	printf("Tabuada de %d\n",n);
	for(i = 1; i <= 10; i++){
		printf(" %d X %d = %d \n",n, i, n * i);

	}
}
