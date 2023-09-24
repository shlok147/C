//swap two numbers with third variable
#include<stdio.h>
void main(){
	int a,b,temp;
	printf("Enter two num :");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d%d",a,b);
}
