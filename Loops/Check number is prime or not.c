#include<stdio.h>
int main(){
	int number;
	int a=0;
	printf("Enter the number:\n");
	scanf("%d",&number);
	for(int i=2;i<=number-1;i++){
		if(number%i==0){
			a=1;
			break;
		}
	}
	if(a==0){
		printf("The number is prime.\n");
	}
	else{
		printf("The number is composite.\n");
	}
	return 0;
}
