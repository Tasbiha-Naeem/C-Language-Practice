#include<stdio.h>
int main(){
	int n;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	int nsp=1;
	int nst=n;
	for(int i=1;i<=2*n-1;i++){
		printf("*");
	}
	printf("\n");
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=nst-i;j++){
			printf("*");
		}
	for(int k=1;k<=nsp;k++){
		printf(" ");
	}
	for(int l=1;l<=nst-i;l++){
		printf("*");
	}
	nsp+=2;
	printf("\n");
	}
	return 0;
}
