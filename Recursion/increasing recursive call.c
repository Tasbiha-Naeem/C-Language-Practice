//increasing
#include<stdio.h>
int increasing(int x,int n){
	if(x>n){
		return 1;
	}
	printf("%d\n",x);
	increasing(x+1,n);
	return 1;	
}
int main(){
	int n;
	int x=1;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("Increasing number:\n");
	increasing(x,n);
	return 0;
}
