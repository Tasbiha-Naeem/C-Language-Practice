#include<stdio.h>
int main(){
	int number;
	printf("Enter the number:\n");
	scanf("%d",&number);
	if((number%5==0 || number%3==0) && number%15!=0){
		printf("Divisible by 3 or 5 but not 15.\n");
	}
	else{
		printf("the number is not matching the required condition.\n");
	}
	return 0;
}
