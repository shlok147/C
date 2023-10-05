#include<stdio.h>
void main(){
	int a,b;
	char c;
	printf("Enter your op choice : ");
	scanf("%c",&c);
	printf("Enter your first number : ");
	scanf("%d",&a);
	printf("Enter your second number : ");
	scanf("%d",&b);
	if  (c=='/' && b==0){
		printf("0 is not divisibal");
	}
	else {
	switch(c){
		case '+' :
			printf("ADDOTION : %d",a+b);
		case '-' :
			printf("SUBTRACTION : %d",a-b);
		case '/' :
			printf("DIVISION : %d",a/b);
		case '*' :
			printf("MULTIPLICATION : %d",a*b);
		default:
			printf("worng");
	}
}
}
