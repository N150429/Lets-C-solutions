/*If a five-digit number is input through the keyboard, write a 
program to reverse the number.*/
#include<stdio.h>
int main(){
	int num,rem,sum=0;
	printf("\n Enter the number");
	scanf("%d",&num);
	while(num>0){
		rem = num%10;
		sum = sum*10+rem;
		num = num/10;
	}
	printf("reverse of the number:%d",sum);
}
