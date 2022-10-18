#include <stdio.h>
#include <string.h>
// library string to use the strcmp command (string comparison), which compares 2 strings to see if they are the same)

int main(){
	char name[8],code[8];

	printf("Your name: ");
		fflush( stdout );
		gets(name);
		fflush( stdout );

	printf("Your password: ");
		fflush( stdout );
		gets(code);
		fflush( stdout );

	while(!strcmp(name,code)){
		printf("The Password cannot be your name\n");
		printf("Your name: ");
				fflush( stdout );
				gets(name);
				fflush( stdout );

			printf("Your password: ");
				fflush( stdout );
				gets(code);
				fflush( stdout );
	}
	if(strcmp(name,code)){
		printf("Welcome %s", name);
	}
}
// to call a string you use %s
