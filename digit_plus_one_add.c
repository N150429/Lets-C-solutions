/*If a five-digit number is input through the keyboard, write a 
program to print a new number by adding one to each of its 
digits. For example if the number that is input is 12391 then 
the output should be displayed as 23402.*/
#include<stdio.h>
int main(){
	int temp,r,num,rem,s_value=0,f_value=0;
	printf("\n Enter the number");
	scanf("%d",&num);
	while(num!=0){
		r = num%10;
		temp = r+1;
		s_value  = s_value*10+temp;
		num=num/10;
	}	
	//till now we add one to every didit in the given number
	//now just reverse the number
	while(s_value!=0){
		r = s_value%10;
		f_value = f_value*10+r;
		s_value = s_value/10;
	}
	printf("\n final value:%d",f_value);
	
}
