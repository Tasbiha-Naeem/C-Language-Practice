//AP without maths using extra variables.
#include<stdio.h>
int main(){
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	int a=4;
	for(int i=1;i<=n;i++){
		printf("%d\n",a);
		a=a+3;
	}
	return 0;
}
