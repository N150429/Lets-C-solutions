/*(1) If a person’s health is excellent and the person is between 
25 and 35 years of age and lives in a city and is a male 
then the premium is Rs. 4 per thousand and his policy 
amount cannot exceed Rs. 2 lakhs. 
(2) If a person satisfies all the above conditions except that 
the sex is female then the premium is Rs. 3 per thousand 
and her policy amount cannot exceed Rs. 1 lakh. 
(3) If a person’s health is poor and the person is between 25 
and 35 years of age and lives in a village and is a male 
then the premium is Rs. 6 per thousand and his policy 
cannot exceed Rs. 10,000. 
(4) In all other cases the person is not insured.
*/

#include<stdio.h>
int main(){
	char hlt;
	int age, premium=0, policy=0;
	char lp, sex;
	printf("\n health e-excellent p- poor living place c-city v-village sex m-male f-female ");
	printf("\n Enter health location age and sex");
	scanf("%c %c %d %c",&hlt,&lp,&age,&sex);

	if(hlt=='e' && (age>=25 && age<=35) && sex=='m' && lp=='c'){
		premium = 4; policy=2;
		printf("Person is insured and the premium is Rs %d per thousand and policy amount can not excedd %d lakhs",premium,policy);
	}
	else if(hlt=='e' && (age>=25 && age<=35) && sex=='f' && lp=='c'){
		premium = 3;
		policy=1;
		printf("Person is insured and the premium is Rs %d per thousand and policy amount can not excedd %d lakhs",premium, policy);
	}
	else if(hlt=='p' && (age>=25 && age<=35) && sex=='m' && lp=='v'){
		premium = 6;
		policy  = 10000;
		printf("Person is insured and the premium is Rs %d per thousand and policy amount can not excedd %d ");		
	}
	else {
		printf("\n Person is not insured");
	}
	
}
