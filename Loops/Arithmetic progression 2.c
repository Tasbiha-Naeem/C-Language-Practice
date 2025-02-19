//Arithmetic progression question 2
//nth term=a+(n-1)*d
#include<stdio.h>
int main(){
	int number;
	printf("Enter the number:\n");
	scanf("%d",&number);
	for(int i=4;i<=3*number+1;i=i+3){
		printf("%d\n",i);
	}
	return 0;
}
