#include<stdio.h>
int main(){
	int n;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
		printf(" ");
		}
		int a=1;
		for(int k=1;k<=2*i-1;k++){
			printf("%d",a);
			a++;
		}
		printf("\n");
	}
	return 0;
}
