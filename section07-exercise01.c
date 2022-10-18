#include <stdio.h>

int main(){
	int n, highest = 0;

	printf("Insert number here here:");
							fflush( stdout );
							scanf("%d", &n);
							fflush( stdout );

	while(n != 0){
		if(n > highest){
			highest = n;
		}
		printf("Insert number here here:");
									fflush( stdout );
									scanf("%d", &n);
									fflush( stdout );
	}

	printf("The highest number é %d", highest);
}
