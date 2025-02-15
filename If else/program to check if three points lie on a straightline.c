#include<stdio.h>
int main(){
	double x1,x2,x3,y1,y2,y3;
	double m1,m2;
	printf("Enter the values:\n");
	scanf("%d %d %d %d %d %d",&x1,&x2,&x3,&y1,&y2,&y3);
	m1=y2-y1/x2-x1;
	m2=y3-y2/x2-x1;
	if(m1==m2){
		printf("Three points lie on a straight line.\n");
	}
	else{
		printf("Three points not lie on a straight line.\n");
	}
	return 0;
}
