#include <stdio.h>

int main(){
	int min_quant, max_quant;
	float med_stock;

	printf("Insert minimum quantity:");
	fflush( stdout );
	scanf("%d", &min_quant);
	fflush( stdout );

	printf("Insert maximum quantity:");
	fflush( stdout );
	scanf("%d", &max_quant);
	fflush( stdout );

	med_stock = (min_quant + max_quant) / 2;

	printf("Medium stock is %.2f", med_stock);


}
