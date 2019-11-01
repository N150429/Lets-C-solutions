#include<stdio.h>
int main(){
	int year;
	printf("\nEnter year to check if the year is leap or not\n");
	scanf("%d",&year);
	if((year%4==0 && year%100==0 && year%400==0) || (year%4==0 && year%100!=0)  ) {
		printf("\n %d is leap year",year);
	}
	else{
		printf("\n %d is not leap year",year);
	}
}
