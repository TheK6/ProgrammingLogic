#include <stdio.h>

int main(){
	float n, wage, e = 0, hour = 10.00 ;
	int c;

	printf("Insert employee code:");
				fflush( stdout );
				scanf("%d", &c);
				fflush( stdout );
				gets(stdin);

	printf("Insert amount of hours worked:");
				fflush( stdout );
				scanf("%f", &n);
				fflush( stdout );

	if(n > 50){
		e = (n - 50) * 20.00;
		wage = (50 * hour) + e;

		printf("Your base wage is %.2f: \n", wage);
		printf("Your extra wage is %.2f:", e);
	}else{
		wage = n * hour;
		printf("Your wage is %.2f: \n", wage);
	}

}
