/*If the three sides of a triangle are entered through the 
keyboard, write a program to check whether the triangle is 
isosceles, equilateral, scalene or right angled triangle.*/
#include<stdio.h>
int main(){
	int s1,s2,s3;
	printf("\n Enter the three sides of the triangle");
	scanf("%d %d %d",&s1,&s2,&s3);
	if(s1==s2 && s2==s3){
		printf("\n Equilateral triangle");
	}
	else if(s1==s2 || s2==s3 || s1==s3){
		printf("\n Isoscles triangle");
	}
	else if(pow(s1,2)+pow(s2,2)==pow(s3,2) ||pow(s2,2)+pow(s3,2)==pow(s1,2) || pow(s1,2)+pow(s3,2)==pow(s2,2)){
		printf("\n Right angled triangle");
	}
	else{
		printf("\n scalen triangle");
	}
}
