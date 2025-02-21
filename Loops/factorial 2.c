#include<stdio.h>
int main(){
	int number;
	printf("Enter the number:\n");
	scanf("%d",&number);
	int factorial;
	int product=1;
	for(int i=1;i<=number;i++){
		product=product*i;
		printf("The factorial of %d is %d.\n",i,product);
	}
	return 0;
}
