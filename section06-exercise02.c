#include<stdio.h>

int main(){
	int a, b, numb;

	printf("Insert number:");
			fflush( stdout );
			scanf("%d", &numb);
			fflush( stdout );

	if(numb > 0){
		a = numb;
		printf("The number %d is positive", a);
	}else{
		b = numb;
		printf("The number %d is negative", b);
	}
}
