//write a program to find largest number between three number
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);
	printf("Enter C :");
	scanf("%d",&c);
	if (a>b && a>c){
		printf("%d is largest",a);
	}
	else if (b>a && b>c){
		printf("%d is largest",b);
	}
	else{
		printf("%d is largest",c);
	}
}
