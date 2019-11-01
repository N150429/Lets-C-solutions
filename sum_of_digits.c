/*If a five-digit number is input through the keyboard, write a 
program to calculate the sum of its digits. 
(Hint: Use the modulus operator ‘%’)*/

#include<stdio.h>
int main(){
	int num,s,d;
	printf("\n Entre the number");
	scanf("%d",&num);
	/*
	printf("\n%d",1%10);
	printf("\n %d",1/10);
	*/
	while(num>0){
		d = num%10;
		s = s+d;
		num = num/10;
	}
	printf("\n sum of digits %d",s);
	
}
