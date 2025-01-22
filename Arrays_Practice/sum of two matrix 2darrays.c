//add two matrix;
#include<stdio.h>
int main(){
	int r,c;
	printf("Enter the number of rows:\n");
	scanf("%d",&r);
	printf("Enter the number of columns:\n");
	scanf("%d",&c);
	int arr1[r][c];
	int arr2[r][c];
	int arr3[r][c];
	printf("Enter the elements of first array:\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter the elements of second arrays:\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
    }
    printf("Sum of two matrices are:");
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				printf("%d ",arr3[i][j]);
			}
			printf("\n");
		}
	
	return 0;
}
