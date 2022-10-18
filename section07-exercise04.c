#include <stdio.h>

int main(){
	int maior = -999, menor = 999, num = 0;
	float media;
	for(int n = 0; n < 10; n++){
		printf("Insert number here here:\n");
				fflush( stdout );
				scanf("%d", &num);
				fflush( stdout );

		if(num > 0){
			if(num > maior){
				maior = num;
			}
			if (num < menor){
			menor = num;
			}
			media = (num + media) / 2;
			}else {
			n--;
		}

	}
		printf("Maior número foi o %d\n", maior);
		printf("Menor número foi o %d\n", menor);
		printf("A média foi %2.f", media);
}
