#include<stdio.h>
int main(){
	int number=19;
	int result;
	for(int i=1;i<=10;i++){
		result=number*i;
		printf("%d*%d=%d\n",number,i,result);
	}
	return 0;
}
