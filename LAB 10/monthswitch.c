#include<stdio.h>
void main(){
	int n;
	printf("Enter Number : ");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("Janyuary-31");
			break;
		case 2:
			printf("February-29/28");
			break;
		case 3:
			printf("March-31");
			break;
		case 4:
			printf("April-30");
			break;
		case 5:
			printf("May-31");
			break;
		case 6:
			printf("Jun-30");
			break;
		case 7:
			printf("July-31");
			break;
		case 8:
			printf("Agust-31");
			break;
		case 9:
			printf("September-30");
			break;
		case 10:
			printf("October-31");
			break;
		case 11:
			printf("Nevember-30");
			break;
		case 12:
			printf("December31");
			break;
		default:
			printf("Invaid Number");
	}
}
