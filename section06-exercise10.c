#include <stdio.h>

int main(){
	int age;

	printf("Insert your age here:");
						fflush( stdout );
						scanf("%d", &age);
						fflush( stdout );

	if(age >= 5 && age <= 7){
		printf("Children A");

			}else if(age >= 8 && age <= 11){
				printf("Children B");

					}else if(age >= 12 && age <= 13){
						printf("Youth A");

							}else if(age >= 14 && age <= 17){
								printf("Youth B");

									}else if(age >= 18){
										printf("Adult");
						}
}
