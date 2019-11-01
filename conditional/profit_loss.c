/*If cost price and selling price of an item is input through the 
keyboard, write a program to determine whether the seller has 
made profit or incurred loss. Also determine how much profit 
he made or loss he incurred.*/
#include<stdio.h>
int main(){
	float cp, sp;
	printf("\n Enter the cost price and selling price of an item");
	scanf("%f %f",&cp,&sp);
	if(cp<sp){
		printf("\n profit is %.f",sp-cp);
	}
	else{
		printf("\n loss is %.f",cp-sp);
	}
	return 0;
}
