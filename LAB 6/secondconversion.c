#include<stdio.h>
void main(){
	int s,hour,minute;
	printf("Enter value of second : ");
	scanf("%d",&s);
	hour=s/3600;
	s=s-(hour*3600);
	minute=(s/60);
	s=s-(minute*60);	
	printf("HH:MM:SS = %02d:%d:%d",hour,minute,s);
}
