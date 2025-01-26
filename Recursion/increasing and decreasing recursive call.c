// increasing and decreasing.
#include<stdio.h>
int increadecrea(int n){
	if(n==0){ 
	   return 1;
	}
	printf("%d\n",n);
	increadecrea(n-1);
	printf("%d\n",n);	
	return 1;
}
int main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	increadecrea(n);
	return 0;
}
