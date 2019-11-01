/*Any year is input through the keyboard. Write a program to 
determine whether the year is a leap year or not. 
(Hint: Use the % (modulus) operator)*/

#include<stdio.h>
int main(){
	int year;
	printf("\nEnter year to check if the year is leap or not\n");
	scanf("%d",&year);
	if(year%4==0){
		if(year%100==0){
			if(year%400==0){
			
				printf("\n %d is leap year",year);
			}
			else
			{
				printf("\n %d is not leap year",year);
			}
		}
		else{
			printf("\n %d is leap year",year);
		}
	}	
	else{
		printf("\n %d is not leap year",year);
	}
	return 0;
}
