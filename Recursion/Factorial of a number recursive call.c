#include<stdio.h>
 int factorial(int n){
 	if(n==1 || n==0){
 		return 1;
	 }
 	return n*factorial(n-1);
 }
int main(){
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	int fact=factorial(num);
	printf("Factorial of %d is:%d",num,fact);
	return 0;
}
