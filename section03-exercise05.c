#include <stdio.h>

int main(){
	int meter, cent;

	printf("Insert measurement in meters:");
		fflush( stdout );
		scanf("%d", &meter);
		fflush( stdout );

	cent = meter * 100;

	printf("The measurement in centimeters is %d", cent);


}
