/*If a four-digit number is input through the keyboard, write a 
program to obtain the sum of the first and last digit of this 
number.*/
#include<stdio.h>
int main(){
	int num;
	int t,f_d,l_d;

	printf("\n Enter the number");
	scanf("%d",&num);
	l_d=num%10;
	while(num>=10){
		//printf("\n %d",num);
		num=num/10;
		
	}
	f_d=num;


	printf("\n first digit %d",f_d);	
	printf("\n last digit %d",l_d);	
	printf("\n sum of first and last digit %d", f_d+l_d);
	return 0;
}
