/*The distance between two cities (in km.) is input through the 
keyboard. Write a program to convert and print this distance 
in meters, feet, inches and centimeters.
*/
#include<stdio.h>
int main(){
	int d;
	float m,f,inch,cm;
	printf("\n enter the disance between two cities in km");
	scanf("%d",&d);
	m=d*1000.0;
	f = d*3280.839895;
	cm = d*100000.0;
	inch = d*39370.07874;
	printf("meters=%.2f feet=%f  inches=%f  centimeters=%.2f",m,f,inch,cm);
	
	return 0;	
}
