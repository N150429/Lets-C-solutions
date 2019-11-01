/*A library charges a fine for every book returned late. For first 
5 days the fine is 50 paise, for 6-10 days fine is one rupee and 
above 10 days fine is 5 rupees. If you return the book after 30 
days your membership will be cancelled. Write a program to 
accept the number of days the member is late to return the 
book and display the fine or the appropriate message.*/

#include<stdio.h>
int main(){
	int ld;
	printf("\n Enter the number of late days:");
	scanf("%d",&ld);
	if(ld<=5){
		printf("\n fine 50 paise");
	}
	else if(ld>=6 && ld<=10){
		printf("\n fine is 1 rupee");
	}
	else if(ld>10 && ld<=30){
		printf("\n fine is 5 rupees");
	}
	else {
		printf("\n Membership is cancelled");
	}
}
