#include<stdio.h>
int main(){
	int n;
	int a=0;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",a);
			a=a+2;
		}
		printf("\n");
	}
	return 0;
}
