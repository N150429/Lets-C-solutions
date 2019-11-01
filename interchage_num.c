/*Two numbers are input through the keyboard into two 
locations C and D. Write a program to interchange the 
contents of C and D.*/

#include<stdio.h>
int main(){
	int num1, num2,temp;
	
	printf("\n Enter the num1 and num2");
	scanf("%d %d",&num1,&num2);
	printf("before changing the values\n num1 = %d\n num2 = %d ",num1,num2);
	temp = num2;
	num2  =num1;
	num1 = temp;
	printf("\nValues after interchange num1 = %d\n num2  =%d",num1,num2);
	
	return 0;
}
