#include<stdio.h>
int stair(int n){
	if(n==1) return 1;
	if(n==2) return 2;
	if(n==3) return 4;
	int totalWays=stair(n-1)+stair(n-2)+stair(n-3);
	return totalWays;
}
int main(){
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	int ways=stair(n);
	printf("%d",ways);
	return 0;
}
