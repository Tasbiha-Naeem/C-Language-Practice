#include<stdio.h>
int main(){
	int n;
	printf("Enter no of rows:\n");
	scanf("%d",&n);
	int a=n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a;j++){
			printf("*");
		}
		printf("\n");
		a--;
	}
	return 0;
}
