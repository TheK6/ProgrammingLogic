#include <stdio.h>

int main(){
	float n;

	printf("Insert level of polution here:");
					fflush( stdout );
					scanf("%f", &n);
					fflush( stdout );

	if(n >= 0.3){
		if(n < 0.4){
			printf("Group one must suspend activities");
		}
		if(n > 0.4 && n <0.5){
			printf("Group one and two must suspend activities");
		}
		if(n > 0.5){
			printf("All Groups must suspend activities");
		}
	}else{
		printf("Pollution levels are acceptable");
	}
}
