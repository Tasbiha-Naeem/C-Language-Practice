#include<stdio.h>
int main(){
	int n;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	int nst=n;
	int nsp=1;
	int a=65;
	for(int i=1;i<=2*n+1;i++){
		char ch=(char)a;
		printf("%c",ch);
		a++;
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		int a=65;
		for(int j=1;j<=nst;j++){
			char ch=(char)a;
			printf("%c",ch);
			a++;
		}
		for(int k=1;k<=nsp;k++){
			printf(" ");
			a++;
		}
		for(int j=1;j<=nst;j++){
			char ch=(char)a;
			printf("%c",ch);
			a++;
		}
		nst--;
		nsp+=2;
		printf("\n");
	}
	return 0;
}
