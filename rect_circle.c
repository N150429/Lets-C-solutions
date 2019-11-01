/*The length & breadth of a rectangle and radius of a circle are 
input through the keyboard. Write a program to calculate the 
area & perimeter of the rectangle, and the area & 
circumference of the circle*/

#include<stdio.h>
int main(){
	int l, b, r, a_rect,p_rect;
	float a_circ,c_circ;
	printf("\n Enter the length , bredth of rectangle and redius of the circle");
	scanf("%d %d %d",&l,&b,&r);
	a_rect = l*b;
	p_rect = 2*(l+b);
	a_circ = 3.14*r*r;
	c_circ = 2*3.14*r;
	printf("\n Area of rectangle = %d \n perimeter of rectangle=%d \n Area of circle=%.3f\n circumference of circle=%.3f",a_rect,p_rect,a_circ,c_circ);
	return 0;
}
