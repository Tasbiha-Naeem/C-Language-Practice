#include<stdio.h>
int main(){
	int number;
	printf("Enter the number:\n");
	scanf("%d",&number);
	if(number>99 && number<1000){
		printf("The number is three digit number.\n");
	}
	else{
		printf("The number is not a three digit number.\n");
	}
	return 0;
}
