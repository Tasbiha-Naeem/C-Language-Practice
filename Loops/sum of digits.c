#include<stdio.h>
int main(){
	int number,sum=0,lastdigit;
	printf("Enter the number:\n");
	scanf("%d",&number);
	while(number!=0){
		lastdigit=number%10;
		sum+=lastdigit;
		number=number/10;
	}
	printf("The sum of digits of a number is %d.",sum);
	return 0;
}
