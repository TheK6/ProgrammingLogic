#include <stdio.h>


int main(){
	int n1, n2, n3, n4;
	float sq1, sq2, sq3, sq4;

	printf("Insert four numbers: \n");
			fflush( stdout );
			printf("Number 1: ");
			fflush( stdout );
			scanf("%d", &n1);
			fflush( stdout );
			printf("Number 2: ");
			fflush( stdout );
			scanf("%d", &n2);
			fflush( stdout );
			printf("Number 3: ");
			fflush( stdout );
			scanf("%d", &n3);
			fflush( stdout );
			printf("Number 4: ");
			fflush( stdout );
			scanf("%d", &n4);
			fflush( stdout );

	sq1 = n1 * n1;
	sq2 = n2 * n2;
	sq3 = n3 * n3;
	sq4 = n4 *n4;

	if(sq3 > 1000){
		printf("%2.f\n", sq3);
	}else{
		printf("%2.f\n", sq1);
		printf("%2.f\n", sq2);
		printf("%2.f\n", sq3);
		printf("%2.f\n", sq4);
	}

}
