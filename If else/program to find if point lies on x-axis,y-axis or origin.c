#include<stdio.h>
int main(){
	int x,y;
	printf("Enter the value of x:\n");
	scanf("%d",&x);
	printf("Enter the value of y:\n");
	scanf("%d",&y);
	if(x==0 && y==0){
		printf("Point lies on origin.\n");
	}
	else if(x==0){
		printf("Point lies on y co-ordinate.\n");
	}
	else if(y==0){
		printf("Point lies on x co-ordinate.\n");
	}
	else{
		printf("The point does not lies on any axis or origin.\n");
	}
	return 0;
}
