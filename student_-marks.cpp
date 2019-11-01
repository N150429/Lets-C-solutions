/*If the marks obtained by a student in five different subjects 
are input through the keyboard, find out the aggregate marks 
and percentage marks obtained by the student. Assume that 
the maximum marks that can be obtained by a student in each 
subject is 100.*/

#include<stdio.h>

int main(){
	int sub1, sub2,sub3,sub4,sub5;
	int aggregate_marks;
	float percentage_marks;
	printf("\n Enter the  5 subject marks of raju");
	scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
	aggregate_marks = sub1+sub2+sub3+sub4+sub5;
	percentage_marks = aggregate_marks/500.0*100;
	printf("aggregate marks = %d and percentage of the marks = %.f%%",aggregate_marks, percentage_marks);
	return 0;
}
