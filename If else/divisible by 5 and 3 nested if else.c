#include<stdio.h>
int main(){
	int  n;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	if(n%5==0){
		if(n%3==0){
			printf("The number is divisible by 5 and 3.\n");
		}
		else{
			printf("The number is not divisible by 5 and 3.\n");
		}
	}
	else{
		printf("The number is not divisible by 5 and 3.\n");
	}
	return 0;
}
