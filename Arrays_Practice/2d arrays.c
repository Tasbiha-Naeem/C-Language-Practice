#include<stdio.h>
int main(){
	int r,c;
	printf("Enter the number of rows:\n");
	scanf("%d",&r);
	printf("Enter the number of columns:\n");
	scanf("%d",&c);
	int i,j;
	int arr[r][c];
	printf("Enter the elements of array:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
