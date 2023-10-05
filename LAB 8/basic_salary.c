#include<stdio.h>
void main(){
	float basic,gross;
	printf("Enter basic salary : ");
	scanf("%f",&basic);
	if (basic>=10000 && basic<20000){
		gross=basic+(basic*0.2)+(basic*0.8);
		printf("%f",gross);
	}
	else if (basic>=20000 && basic<30000){
		gross=basic+(basic*0.25)+(basic*0.9);
		printf("%f",gross);
	}
	else if (basic>=30000){
		gross=basic+(basic*0.3)+(basic*0.95);
		printf("%f",gross);
	}
	else{
		printf("not found");
	}
}
