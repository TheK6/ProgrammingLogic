#include <stdio.h>

int main(){
	float wage, total;
	int hours;

	printf("Insert how much you make per hour:");
		fflush( stdout );
		scanf("%f", &wage);
		fflush( stdout );

		printf("Insert how many hours you worked:");
		fflush( stdout );
		scanf("%d", &hours);
		fflush( stdout );

		total = wage * hours;

		printf("Your salary for the week is %.1f", total);

}
