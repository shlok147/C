#include<stdio.h>
void main (){
	float s1,s2,s3;
	printf("enter value of side1 : ");
	scanf("%f",&s1);
	printf("enter value of side2 : ");
	scanf("%f",&s2);
	printf("enter value of side3 : ");
	scanf("%f",&s3);
	if (s1==s2 || s2==s3 || s1==s3){
		if (s1==s2 && s2==s3){
			printf("Your triangle is Equilateral");
		}
		else {
		printf("Your triangle is isosceles");
	}
}
	else {
		printf("Your triangle is scalene");
	}
}
