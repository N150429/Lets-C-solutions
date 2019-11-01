/*Any character is entered through the keyboard, write a 
program to determine whether the character entered is a 
capital letter, a small case letter, a digit or a special symbol.*/

#include<stdio.h>
int main(){
	char c;
	printf("\n Enter any character");
	scanf("%c",&c);
	int d  = (int)c;
	printf("%d",d);
	if(d>=65 && d<=90){
		printf("\nThe entered character is capital letter");
	}
	else if(d>=97 && d<=122){
		printf("\n The entered character is small letter");
	}
	else if(d>=48 && d<=57){
		printf("The entered character is digit");
	}
	else if(d<=127)
	{
		printf("\n The entered character is special symbol");
	}
	else{
		printf("\n Wrong input");
	}
}
