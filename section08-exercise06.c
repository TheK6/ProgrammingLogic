#include <stdio.h>

int main(){
	int v1[5],c;

		printf("Insert numeric code here: ");
				fflush(stdout);
				scanf("%d",&c);
				fflush(stdout);

	if(c != 0){
		for(int i = 0; i < 5; i++){
			printf("Insert numeric code here %d/5:  ", i+1);
				fflush(stdout);
				scanf("%d",&v1[i]);
				fflush(stdout);
		}if(c ==1){
			for(int i = 0; i < 5; i++){
						printf(" %d\n", v1[i]);
			}
		}if(c == 2){
			for(int i = 4; i >= 0; i--){
			printf("%d\n", v1[i]);
			}
		}

		}else{
			printf("Program over");
	}

}
