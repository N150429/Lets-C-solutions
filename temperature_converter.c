/*Temperature of a city in Fahrenheit degrees is input through 
the keyboard. Write a program to convert this temperature 
into Centigrade degrees*/
#include<stdio.h>
int main(){
	float ft,cg;
	printf("\n Enter temperature in Fahrenheit");
	scanf("%f",&ft);
	cg = (ft - 32) * 5/9;
	printf("\n temperature in centigrades %.4f",cg);
	return 0;
}
