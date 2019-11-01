/*Raju’s basic salary is input through the keyboard. His 
dearness allowance is 40% of basic salary, and house rent 
allowance is 20% of basic salary. Write a program to calculate 
his gross salary.*/

#include<stdio.h>
int main(){
	float salary, da=40, hr=20;
	printf("\n Enter the basic salary of raju");
	scanf("%f",&salary);
	printf("\nGross salary of raju is %.2f",salary+ (salary*(da/100))+(salary*(hr/100)));
	return 0;
}
