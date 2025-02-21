#include<stdio.h>
int main(){
	int number,count=0;
	printf("Enter the number:\n");
	scanf("%d",&number);
	while(number!=0){
		number=number/10;
		count++;
	}
	printf("%d digits of number",count);
	return 0;
}
