#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter the value of num1,num2,num3:\n");
	scanf("%d %d %d",&num1,&num2,&num3);
    if((num1+num2>num3) && (num2+num3>num1) && (num1+num3>num2)){
    	printf("Valid triangle");
	}
	else{
		printf("Invalid triangle");
	}
	return 0;
} 
