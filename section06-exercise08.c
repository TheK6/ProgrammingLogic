#include <stdio.h>

int main(){
	int n;

	printf("Insert number here: ");
				fflush( stdout );
				scanf("%d", &n);
				fflush( stdout );

	if(n % 2 == 0){
		printf("The number %d is even\n", n);
	}else{
		printf("The number %d is odd\n", n);
	}
	if(n > 0){
		printf("The number %d is positive", n);
			}else{
				printf("The number %d is negative", n);
	}

}
