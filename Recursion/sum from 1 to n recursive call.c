//printf sum form 1 to n
#include<stdio.h>
void sumofnumber(int n,int sum){
	if(n==0){
		printf("Sum is:%d",sum);
	}
	sumofnumber(n-1,sum+n);
	return;
	
}
int main(){
	int n;
		printf("Enter the value of n:\n");
		scanf("%d",&n);
		sumofnumber(n,0);
	return 0;
	
}
