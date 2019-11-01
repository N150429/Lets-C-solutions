/*Given the length and breadth of a rectangle, write a program to 
find whether the area of the rectangle is greater than its 
perimeter. For example, the area of the rectangle with length = 5 
and breadth = 4 is greater than its perimeter.*/
#include<stdio.h>
int main(){
	int l,b,area,perimeter;
	
	printf("\n Enter the length and bredth of the rectangle");
	scanf("%d %d",&l,&b);
	
	area = l*b;
	perimeter  =2*(l+b);
	if(area>perimeter){
		printf("\n Area is greater than perimeter");
	}
	else{
		printf("\n Area is smaller than perimeter");
	}
}
