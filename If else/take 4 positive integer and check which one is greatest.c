#include<stdio.h>
int main(){
	int num1,num2,num3,num4;
	printf("Enter the value of num1:\n");
	scanf("%d",&num1);
	printf("Enter the value of num2:\n");
	scanf("%d",&num2);
	printf("Enter the value of num3:\n");
	scanf("%d",&num3);
	printf("Enter the value of num4:\n");
	scanf("%d",&num4);
	if(num1>num2 && num1>num3 && num1>num4){
		printf("%d is greatest.",num1);
	}
	if(num2>num1 && num2>num3 && num2>num4){
		printf("%d is greatest.",num2);
	}
	if(num3>num1 && num3>num2 && num3>num4){
		printf("%d is greatest.",num3);
	}
	if(num4>num1 && num4>num2 && num4>num3){
		printf("%d is greatest",num4);
	}
	return 0;
}
