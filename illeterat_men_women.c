/*In a town, the percentage of men is 52. The percentage of 
total literacy is 48. If total percentage of literate men is 35 of 
the total population, write a program to find the total numberof illiterate men and women if the population of the town is 
80,000
*/

#include<stdio.h>
int main(){
	int totp=80000,mp = 52,totl = 48, lm = 35;
	float totm, totlp,totlm;
	totm = totp*(mp/100.0); // total men
	totlp = totp*(totl/100.0); // total literacy people
	totlm = totp*(lm/100.0);  //total literacy men
	printf("\n total population: %d",totp);
	printf("\n total men:%.1f",totm);
	printf("\n total literacy men:%.2f",totlm);
	printf("\n total literacy women:%.2f",totlp-totlm);   //total literacy women
	printf("\ntotal literacy people:%f",totlp);         //total literacy people
	printf("\n total illeterate men:%.f",totm-totlm);    //total illeteratae men
	printf("\n total illetrate women:%.f",(totp-totm)-(totlp-totlm)); // total illeterate women
	
	return 0;
}
