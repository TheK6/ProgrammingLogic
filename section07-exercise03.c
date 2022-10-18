#include <stdio.h>

int main(){
	for(int n = 100; n <= 200; n++){
		if(n % 2 != 0){
			printf("%d is odd \n", n);
		}
	}
}
