#include<stdio.h>
int main(){
	int length,breadth,area,perimeter;
	printf("Enter the length:\n");
	scanf("%d",&length);
	printf("Enter the breadth:\n");
	scanf("%d",&breadth);
	area=(length*breadth);
	perimeter=2*(length+breadth);
	if(area>perimeter){
		printf("The area of rectangle is greater than perimeter.\n");
	}
	else{
		printf("The area of rectangle is not greater than perimeter.\n");
	}
	return 0;
}
