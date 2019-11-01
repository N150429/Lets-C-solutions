/*If the ages of Ram, Shyam and Ajay are input through the 
keyboard, write a program to determine the youngest of the 
three.*/
#include<stdio.h>
int main(){
	int r,s,a;
	printf("\n Enter the age of Ramm, Shyam and Ajay");
	scanf("%d %d %d",&r,&s,&a);
	if(r<=s && r<=a){
		printf("\n Ram is youngest");
	}
	else if(s<=r && s<=a){
		printf("\n Shyam is youngest");
		
	}
	else{
		printf("\n Ajay is youngest");
	}
}
