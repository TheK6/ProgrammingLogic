#include <stdio.h>

int main(){
	int i, p, n = 0, b = 0, cl = 0, c = 0, q = 0;

		printf("Insert mouse id here: ");
						fflush( stdout );
						scanf("%d", &i);
						fflush( stdout );
		while(i != 0){

			printf("Insert mouse problem here:\n 1 - If it needs a ball \n 2 - If it needs cleaning.\n 3 - if needs a cable\n 4 - If broken ");
				fflush( stdout );
				scanf("%d", &p);
				fflush( stdout );

					if(p < 1 || p > 4){
				printf("Choose among our options 1-4: \n");

					}else{
				if(p == 1){
				b = b + 1;

				}else if(p == 2){
				cl = cl + 1;

				}else if(p == 3){
				c = c + 1;

				}else if(p == 4){
				q = q + 1;
				}
				n = n + 1;
				printf("Insert mouse id here:\n\n ");
						fflush( stdout );
						scanf("%d", &i);
						fflush( stdout );
				}
		}
		float p1,p2,p3,p4;
		p1 = ((float)b/(float)n) * 100;
		p2 = ((float)cl/(float)n) * 100;
		p3 = ((float)c/(float)n) * 100;
		p4 = ((float)q/(float)n) * 100;
		printf("Total number of mouses: %d \n\n", n);
					printf("Situation. \t\t\t\t Quantity  Percentage\n");
					printf("1 - Mouses that need new balls:      \t\t%d\t%.2f%% \n", b, p1);
					printf("2 - Mouses that need cleaning:       \t\t%d\t %.2f%% \n", cl, p2);
					printf("3 - Mouses that need cable changed: \t\t %d\t %.2f%% \n", c, p3);
					printf("4 - Mouses that are broken:          \t\t\%d\t %.2f%% \n", q, p4);
}

