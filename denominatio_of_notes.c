/*A cashier has currency notes of denominations 10, 50 and 
100. If the amount to be withdrawn is input through the 
keyboard in hundreds, find the total number of currency notes 
of each denomination the cashier will have to give to the 
withdrawer.*/
#include<stdio.h>
int main(){
	int total, am, ten=10, fif=50, hun = 100;
	printf("\n enter the amount in hundrends");
	scanf("\n%d",&am);
	total=am/hun;
	printf("\n%d hundred notes",total);
	am=am-(total*hun);
	total = am/fif;
	printf("\n%d fifty notes",total);
	am = am-(total*fif);
	total = am/ten;
	printf("\n%d ten notes",total);
	
	return 0;
}
