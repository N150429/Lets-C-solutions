/*In a company, worker efficiency is determined on the basis of 
the time required for a worker to complete a particular job. If 
the time taken by the worker is between 2 � 3 hours, then the 
worker is said to be highly efficient. If the time required by 
the worker is between 3 � 4 hours, then the worker is ordered 
to improve speed. If the time taken is between 4 � 5 hours, the 
worker is given training to improve his speed, and if the time 
taken by the worker is more than 5 hours, then the worker has 
to leave the company. If the time taken by the worker is input 
through the keyboard, find the efficiency of the worker.*/
#include<stdio.h>
int main(){
	float time;
	printf("\n Enter the time taken by the worker");
	scanf("%f",&time);
	if(time>=2 && time <=3){
		printf("\n worker is highly efficient");
	}
	else if(time>=3 && time<=4){
		printf("\n worker need improve");
	}
	else if(time>=4 && time<=5){
		printf("\n train to improve speed");
	}
	else {
		printf("\n worke leave the company");
	}
}
