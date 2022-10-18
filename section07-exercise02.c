#include <stdio.h>

int main(){
	for(int n = 1; n <= 100; n++){
		printf("%d\n", n);
		if(n % 10 == 0){
			printf("Multiple of 10\n");
		}
	}
}

/* the code I wrote is the following:
 *
 * int n = 1;

	while(n < 100){
		n = n + 1;
		if(n % 10 == 0){
			printf("%d is a multiple of 10\n", n);
		}
	}
 */
