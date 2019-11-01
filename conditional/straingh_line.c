/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a 
program to check if all the three points fall on one straight line.*/
#include<stdio.h>
int main(){
	int  x1,x2,x3,y1,y2,y3,s1,s2;
	printf("\n Enter the (x1,y1)");
	scanf("%d %d",&x1,&y1);
	printf("\n Enter the (x2,y2)");
	scanf("%d %d",&x2,&y2);
	printf("\n Enter the (x3,y3)");
	scanf("%d %d",&x3,&y3);
	s1 = y2-y1/x2-x1;
	s2 = y3-y1/x3-x1;

	if(s1==s2){
		printf("\n The points fall on straight line");
	}
	else{
		printf("\n The points are not fall on straight line");
	}
}
