#include<stdio.h>
int main(){
	int n;
	printf("Enter the value oof n:\n");
	scanf("%d",&n);
	int nsp=3;
	for(int i=1;i<=n;i++){
		int a=65;
		for(int j=1;j<=nsp;j++){
			printf(" ");
		}
		nsp--;
		for(int k=1;k<=i;k++){
			 char ch=(char)(k+64);
			printf("%c",ch);
		}
		int y=i-1;
		for(int l=1;l<=i-1;l++){
		      char ch=(char)(y+64);
		      printf("%c",ch);
		      y--;
		}
		printf("\n");
	}
	return 0;
}
