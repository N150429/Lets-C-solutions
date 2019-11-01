/*If the total selling price of 15 items and the total profit earned 
on them is input through the keyboard, write a program to 
find the cost price of one item.*/
#include<stdio.h>
int main(){
	float cost_items , profit,total;
	printf("\n Enter the cost of 15 items and profit");
	scanf("%f %f",&cost_items,&profit);
	total = (cost_items-profit);
	printf("cost of one item: %.2f",total/15);
	return 0;
}
