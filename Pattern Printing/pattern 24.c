#include<stdio.h>
int main(){
	int n;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	int nsp=3;
	   for(int i=1;i<=n;i++){
	   	int a=i-1;
		for(int j=1;j<=nsp;j++){
			printf(" ");
		}
		nsp--;
	    for(int j=1;j<=i;j++){
		printf("%d",j);
	   }
	   for(int k=1;k<=i-1;k++){
	   	printf("%d",a);
	   	a--;
	   }
	   printf("\n");
}
	return 0;
}
