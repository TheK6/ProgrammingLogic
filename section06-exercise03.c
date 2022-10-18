#include <stdio.h>

int main(){
	int numb, p = 0, i = 0;

	printf("Insert number:");
		fflush( stdout );
		scanf("%d", &numb);
		fflush( stdout );

	if(numb % 2 == 0){
		p = numb;
	}else{
		i = numb;
	}

	printf("%d is an even number\n", p);
	printf("%d is an odd number", i);



}

