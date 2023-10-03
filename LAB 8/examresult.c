#include<stdio.h>
void main (){
	int sub1,sub2,sub3,sub4,sub5,p;
	printf("Enter mark of subject 1 : ");
	scanf("%d",&sub1);
	printf("Enter mark of subject 2 : ");
	scanf("%d",&sub2);
	printf("Enter mark of subject 3 : ");
	scanf("%d",&sub3);
	printf("Enter mark of subject 4 : ");
	scanf("%d",&sub4);
	printf("Enter mark of subject 5 : ");
	scanf("%d",&sub5);
	p=(sub1+sub2+sub3+sub4+sub5)/5;
	if (p<35){
		printf("fail : %d",p);
	}
	else if (36<=p && 45>=p){
		printf("pass : %d",p);
	}
	else if (46<=p && 60>=p){
		printf("second class : %d",p);
	}
	else if (61<=p && 70>=p){
		printf("first class : %d",p);
	}
	else if (71<=p && 100>=p){
		printf("destiction : %d",p);
	}
}
