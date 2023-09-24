#include<stdio.h>
void main(){
	int D,Y,W; 
	printf("Enter numbers of day: ");
	scanf("%d",&D);
	Y = D/365;
	D = D-(Y*365);
	W = D/7;
	D = D-(W*7);
	printf("years:week:days   :   %d:%d:%d",Y,W,D);
}
