#include <stdio.h>

int main(){
	int num1, num2, add, mult;


	printf("Insert number 1: ");
	fflush( stdout );
	scanf("%d", &num1);
	fflush( stdout );

	printf("Insert number2: ");
	fflush( stdout );
	scanf("%d", &num2);
	fflush( stdout );

	add = num1 + num2;
	mult = add * num1;

	printf("The result of the multiplication is %d", mult);

}
