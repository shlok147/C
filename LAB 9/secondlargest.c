#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter Frist int : ");
	scanf("%d",&a);
	printf("Enter Second int : ");
	scanf("%d",&b);
	printf("Enter Third int : ");
	scanf("%d",&c);
	if (a>b && a>c){
		if(b>c){
			printf("Second largest number is : %d",b);
		}
		else {
			printf("Second largets number is : %d",c);
		}
	}
	if (b>c && b>a){
		if(a>b){
			printf("Second largest number is : %d",a);
		}
		else {
			printf("Second largets number is : %d",b);
		}
	}
	if (c>b && c>a){
		if(b>a){
			printf("Second largest number is : %d",b);
		}
		else {
			printf("Second largets number is : %d",a);
		}
	}
}
