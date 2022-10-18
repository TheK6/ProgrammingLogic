#include <stdio.h>

int main(){
	float height, ideal_weight;

	printf("Insert your height: (in meters)");
		fflush( stdout );
		scanf("%f", &height);
		fflush( stdout );

	ideal_weight = (height * 72.7) - 58;

	printf("Your ideal weight is %.2f: ", ideal_weight);

}


