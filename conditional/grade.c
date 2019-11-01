/*A certain grade of steel is graded according to the following 
conditions: 
(i) Hardness must be greater than 50 
(ii) Carbon content must be less than 0.7 
(iii) Tensile strength must be greater than 5600 
The grades are as follows: 
Grade is 10 if all three conditions are met 
Grade is 9 if conditions (i) and (ii) are met 
Grade is 8 if conditions (ii) and (iii) are met 
Grade is 7 if conditions (i) and (iii) are met 
Grade is 6 if only one condition is met 
Grade is 5 if none of the conditions are met 
Write a program, which will require the user to give values of 
hardness, carbon content and tensile strength of the steel 
under consideration and output the grade of the steel.
*/
#include<stdio.h>
int main(){
	int hard, tensile;
	float carb;
	printf("\n Entr the hardness, carbon and tensile strength");
	scanf("%d %f %d",&hard, &carb, &tensile);
	
	if(hard>50 && carb<0.7 && tensile>5600){
		printf("Grade is 10 if all three conditions are met ");
	}
	else if(hard>50 && carb<0.7){
		printf("\n Grade is 9 if conditions (i) and (ii) are met ");
	}
	else if(carb<0.7 && tensile>5600){
		printf("\n Grade is 7");
	}
	else if(hard>50 || carb<0.7 || tensile>5600){
		printf("\n Grade is 6");
	}
	else {
		printf("\n Grade is 5");
	}
	
}
