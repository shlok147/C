#include<stdio.h>
void main(){
	char c;
	printf("Enter num,ch :");
	scanf("%c",&c);
	if (c>=65 && c<90){
		printf("%c is in uper case",c);
	}
	else if (c>=97 && c<122){
		printf("%c is in lower case",c);
	}
	else if (c>=48 && c<57){
		printf("%c is digit",c);
	}
	else {
		printf("%c is special character",c);
	}
}
