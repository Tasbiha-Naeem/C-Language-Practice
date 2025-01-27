#include<stdio.h>
int mazetwo(int n,int m){
	int rightways=0;
	int downways=0;
	if (n==1 && m==1) return 1;
	if (n==1){
		rightways+=mazetwo(n,m-1);
	}
	if(m==1){
		downways+=mazetwo(n-1,m);
	}
	if(n>1 && m>1){
		rightways+=mazetwo(n,m-1);
		downways+=mazetwo(n-1,m);
	}
	int totalways=rightways+downways;
	return totalways;
}
int main(){
	int n,m;
	printf("Enter no of rows of the maze:\n");
	scanf("%d",&n);
	printf("Enter no of columns of the maze:\n");
	scanf("%d",&m);
	int noofways=mazetwo(n,m);
	printf("%d",noofways);
	return 0;
}
