#include<stdio.h>
int main(){
	int number;
	printf("Enter the number:\n");
	scanf("%d",&number);
	(number%2==0)?printf("Even"):printf("Odd");
	return 0;
}
