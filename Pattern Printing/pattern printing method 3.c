#include<stdio.h>
int main(){
	int n;
	int nst=1,nsp=3;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=nsp;j++){
			printf(" ");
		}
		nsp=nsp-1;
		for(int k=1;k<=nst;k++){
			printf("*");
		}
		nst=nst+2;
	  printf("\n");	
	 }
	return 0;
}
