#include<stdio.h>
void main(){
	int a,b,c,sum,avg;
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	printf("Enter value of c : ");
	scanf("%d",&c);
	sum=a+b+c;
	avg=sum/3;
	printf("avg:%d",avg);
}
