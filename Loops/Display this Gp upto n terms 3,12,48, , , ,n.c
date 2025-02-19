//Display this Gp upto n terms 3,12,48, , , ,n.
#include<stdio.h>
int main(){
	int a=3;
	int number;
	printf("Enter the number:\n");
	scanf("%d",&number);
	for(int i=1;i<=number;i++){
		printf("%d\n",a);
		a=a*4;
	}
	return 0;
}
