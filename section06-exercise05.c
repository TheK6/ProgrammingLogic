#include <stdio.h>

int main(){
	float weight, excess = 0, fine = 0;

	printf("Insert amount fished (in kilos):");
				fflush( stdout );
				scanf("%f", &weight);
				fflush( stdout );

	if(weight > 50){
		excess = (weight - 50);
		fine = excess * 4;
	}

			printf("Total Weight was %.2f: \n", weight);
			printf("Excess weight was %.2f: \n", excess);
			printf("The fine to be paid is %.2f: \n", fine);
}
