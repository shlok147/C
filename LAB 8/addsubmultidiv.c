#include<stdio.h>
void main (){
	char a;
	int b,c;
	printf("Enter your choice : ");
	scanf("%c",&a);
	if (a=='+' || a=='-' || a=='/' || a=='*'){
	printf("Enter your first number : ");
	scanf("%d",&b);
	printf("Enter your second number : ");
	scanf("%d",&c);
	if (a=='/' && c==0){
		printf("0 is invaid for division");
		}
	else {
	   if (a=='+'){
		printf("addition of numbers : %d",b+c);
	  }
	   if (a=='-'){
		printf("subtraction of numbers : %d",b-c);
	  }
	   if (a=='*'){
		printf("multiplication of numbers : %d",b*c);
	  }
	   if (a=='/'){
		printf("Division of numbers : %d",b/c);
	}
   }
  }
   else {
   	printf("Your choice is wrong : %c",a);
   }
}
