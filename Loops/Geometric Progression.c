//Geometric Progression 100,50,25,12.5,,,,,,,,n.
#include<stdio.h>
int main(){
	int number;
	printf("Enter the number:\n");
	scanf("%d",&number);
	float a=100;
	for(int i=1;i<=number;i++){
		a=a/2;
		printf("%.2f\n",a);
	}
	return 0;
}
