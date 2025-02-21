#include<stdio.h>
int main(){
	int number,remainder=0;
	printf("Enter the number:\n");
	scanf("%d",&number);
	while(number>0){
		remainder=remainder*10;
		remainder=remainder+(number%10);
		number=number/10;	
	}
	printf("The reverse number is %d.",remainder);
	return 0;
}
