#include<stdio.h>
void main(){
	char ch;
	printf("Enter character :");
	scanf("%c",&ch);
	if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
		printf("ch is vowel : %c",ch);
	}
	else{
		printf("ch is  consonant : %c",ch);
	}
}
