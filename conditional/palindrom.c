/*A five-digit number is entered through the keyboard. Write a 
program to obtain the reversed number and to determine 
whether the original and reversed numbers are equal or not.*/
#include<stdio.h>
int main(){
	int num,s=0,r,anum;
	
	printf("\n enter the number");
	scanf("%d",&num);
	anum = num;
	while(num!=0){
		r=num%10;
		s=s*10+r;
		num=num/10;
	}
	if(s==anum){
		printf("\n Equal");
	}
	else{
		printf("\n Not eqaul");
	}
}
