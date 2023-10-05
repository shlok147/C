//
#include<stdio.h>
void main(){
	int unit;
	float total,ta,unit2,sc;
	printf("Enter unit : ");
	scanf("%d",&unit);
	if (unit<=50){
		total=unit*0.50;
		printf("total=%.2f",total);
	}
	else if (50<unit && 150>=unit){
		unit2=unit-50;
		total=(50*0.50)+(unit2*0.75);
		printf("total=%.2f",total);
	}
	else if (150<unit && 250>=unit){
		unit2=unit-150;
		total=(50*0.50)+(100*0.75)+(unit2*1.20);
		printf("total=%.2f",total);
	}
	else {
		unit2=unit-250;
		total=(50*0.50)+(100*0.75)+(100*1.20)+(unit2*1.50);
		printf("total=%.2f",total);
	}
	sc=0.20*unit;
	printf("\nsurcharge : %.2f",sc);
	ta=sc+total;
	printf("\ntotal amount is : %.3f",ta);
}
