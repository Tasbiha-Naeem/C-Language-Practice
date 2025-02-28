#include<stdio.h>
int main(){
	int n;
	printf("Enter the number of row:\n");
	scanf("%d",&n);
	int i;
	int nsp=0;
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=nsp;j++){
		printf(" ");
        }
        nsp++;
        for(int k=1;k<=(n+1)-i;k++){
        	printf("*");
		}
        printf("\n");
	}
	return 0;
}
	
