#include<stdio.h>
int main(){
	int percentage;
	printf("Enter your percentage:\n");
	scanf("%d",&percentage);
	if(percentage>80){
		printf("A");
	}
	else if(percentage>60){
		printf("B");
	}
	else if(percentage>40){
		printf("C");
	}
	else if(percentage>20){
		printf("D");
	}
	else{
		printf("F");
	}
	return 0;
}
