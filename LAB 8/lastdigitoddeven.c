#include<stdio.h>
void main(){
	int a,rem;
	printf("Enter int : ");
	scanf("%d",&a);
	rem=a%10;
	if (rem%2==0){
		printf("num is even : %d",rem);
	}
	else {
		printf("num is odd : %d",rem);
	}
}
