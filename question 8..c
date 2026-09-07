#include <stdio.h>
int main(){
	char fullname[100];
	printf("Enter your full name: ");
	fgets(fullname, 100, stdin);
	printf("Hello,\n");
	printf("%s", fullname);
	
	return 0;
}

