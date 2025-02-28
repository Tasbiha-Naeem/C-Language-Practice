#include<stdio.h>
int main(){
	int n;
	int nsp=1;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	int noft=((2*n-1)/2)+1;
	int m=((2*n-1)/2)+1;
	for(int i=1;i<=2*n-1;i++){
		if(i>=m){
			printf("%d",m);
			m--;
		}
		else{
			printf("%d",i);
		}
	}
	printf("\n");
	
	int j;
	for(j=1;j<=n;j++){
	for(int i=1;i<noft;i++){
		printf("%d",i);
	}
	for(int k=1;k<=nsp;k++){
		printf(" ");
	}
    for(int t=n-j;t>=1;t--){
    	printf("%d",t);
	}
	nsp+=2;
	noft--;
	printf("\n");
    }	
	return 0;
}
