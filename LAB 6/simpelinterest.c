// SIMPEL INTEREST //
#include<stdio.h>
void main(){
	int principal,rate,time,interest;
	printf("Enter value of principal amount : ");
	scanf("%d",&principal);
	printf("Enter value of rate of interest : ");
	scanf("%d",&rate);
	printf("Enter value of time of interest(in month) : ");
	scanf("%d",&time);
	interest = (principal*rate*time)/100;
	printf("value of interest is : %d");  
}
