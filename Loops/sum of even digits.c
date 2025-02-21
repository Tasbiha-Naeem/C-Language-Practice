#include<stdio.h>
int main(){
	int number,lastdigit,sum=0;
	printf("Enter the number:\n");
	scanf("%d",&number);
	while(number!=0){
		lastdigit=number%10;
		if(lastdigit%2==0){
			sum+=lastdigit;
		}
		number=number/10;
	}
	printf("The sum of even digits of a number are:%d",sum);
	return 0;
}
