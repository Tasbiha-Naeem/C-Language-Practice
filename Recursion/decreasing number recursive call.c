//decreasing number recursive call
#include<stdio.h>
int decreasing(int n){
	if(n==0){
		return 1;
	}
	printf("%d\n",n);
	decreasing(n-1);
	return 1;
}
int main(){
	int n;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("Decreasing Number:\n");
	decreasing(n);
	return 0;
}
