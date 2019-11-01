/*Find the absolute value of a number entered through the 
keyboard.*/
#include<stdio.h>
int main(){
	int num;
	printf("\nEnter any number");
	scanf("%d",&num);
	if(num<0){
		printf("\n The absolute value is %d",-1*num);
	}else{
		printf("\n The abolute value is %d",num);
	}
}
