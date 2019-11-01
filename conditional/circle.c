/*Given the coordinates (x, y) of a center of a circle and it’s radius, 
write a program which will determine whether a point lies inside 
the circle, on the circle or outside the circle. 
(Hint: Use sqrt( ) and pow( ) functions)*/

#include<stdio.h>
int main(){
	int x,y,r;
	printf("\n Enter the radius");
	scanf("%d",&r);
	printf("\n Enter the x-y coordinates of the circle");
	scanf("%d %d",&x,&y);
	if(r<sqrt(pow(x,2)+pow(y,2))) {
		printf("\n The point lies outside the circle");
	}	
	else if(r==sqrt(pow(x,2)+pow(y,2))){
		printf("\n The point lies on the circle");
	}
	else {
		printf("\n The point lies inside the circle");
	}
}
