/*Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at the rate of Rs. 12.00 per hour for every 
hour worked above 40 hours. Assume that employees do not 
work for fractional part of an hour*/

#include<stdio.h>
int main(){
	int i=0,over_pay=0,emp=10,hrs=0;
	for(i=0;i<emp;i++){
		printf("\n Enter the hours worked by the person");
		scanf("%d",&hrs);
		if(hrs>40){
			over_pay=(hrs-40)*12;
			printf("\n The persons over time worked amount: %d",over_pay);
		}
		else{
			printf("\n This person did not worked over time");
		}
	}	
}
