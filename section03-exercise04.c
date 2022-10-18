#include <stdio.h>

int main(){
	int num1, num2, add;

	printf("Insert number 1:");
		fflush( stdout );
		scanf("%d", &num1);
		fflush( stdout );

		printf("Insert number 2:");
		fflush( stdout );
		scanf("%d", &num2);
		fflush( stdout );

	add = num1 + num2;

	printf("O resultado da soma é %d",add);



}
