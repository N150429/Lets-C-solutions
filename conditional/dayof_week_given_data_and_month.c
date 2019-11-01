/*According to the Gregorian calendar, it was Monday on the 
date 01/01/1900. If any year is input through the keyboard 
write a program to find out what is the day on 1st January of 
this year.*/
#include<stdio.h>
int main(){

	int d    = 10   ; //Day     1-31
	int m    = 1    ; //Month   1-12`
	int y    = 1900 ; //Year    2013` 


	printf("\n Enter your year");
	scanf("%d",&y);
	int weekday  = (d += m < 3 ? y-- : y - 2, 23*m/9 + d + 4 + y/4- y/100 + y/400)%7;
	
	if(weekday==0){
		printf("\nsunday");
	}
	else if(weekday==1){
		printf("\nmonday");
	}
	else if(weekday==2){
		printf("\n Tuesday");
	}
	else if(weekday==3){
		printf("\n wednsday");
		
	}
	else if(weekday==4){
		printf("\n Thursday");
	}
	else if(weekday==5){
		printf("\n Friday");
	}
	else{
		printf("\n Saturday");
	}
	return 0;
}
