#include<stdio.h>
int main(){
	int number,remainder=0,sum=0,original;
	printf("Enter the number:\n");
	scanf("%d",&number);
	original=number;
	while(number>0){
		remainder=remainder*10;
		remainder=remainder+(number%10);
		number=number/10;	
	}
	sum=original+remainder;
	printf("The sum of original number and its reverse is %d",sum);
	return 0;
}
