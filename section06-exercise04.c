#include <stdio.h>
#include <ctype.h>

int main(){
	float height, ideal_weight;
	char sex;

	printf("Insert your height:");
			fflush( stdout );
			scanf("%f", &height);
			gets(stdin);

	printf("Insert your sex m/f:");
			fflush( stdout );
			scanf("%c", &sex);
			fflush( stdout );

	if(tolower(sex) == 'm'){
		ideal_weight = (height * 72.7) - 58;
		printf("your ideal weight is %.2f", ideal_weight);
	}
	if(tolower(sex) == 'f'){
		ideal_weight = (height * 62.1) - 44.7;
		printf("your ideal weight is %.2f", ideal_weight);
	}
	if(tolower(sex) != 'm' && tolower(sex) != 'f' ){
		printf("Sex not recognized. \n");
	}


}
