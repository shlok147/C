#include<stdio.h>
void main(){
	float C,F;
	printf("Enter value of fahrenheit : ");
	scanf("%f",&F);
	C=(F-32)*5/9;
	printf("value of celsius from fahrenheit:%f",C);
}
