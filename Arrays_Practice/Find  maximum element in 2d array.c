#include<stdio.h>
#include<Climits>
int main(){
	int maximum_element=INT_MIN;
	int r,c;
	printf("Enter the number of rows:\n");
	scanf("%d",&r);
	printf("Enter the number of columns:\n");
	scanf("%d",&c);
	int arr[r][c];
	printf("Enter the elements of array:\n");
    for(int i=0;i<r;i++){
    	for(int j=0;j<c;j++){
    		scanf("%d",&arr[i][j]);
		}
	}
	("[----------Array-----------]");
	for(int i=0;i<r;i++){
    	for(int j=0;j<c;j++){
    		printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(arr[i][j]>maximum_element){
				maximum_element=arr[i][j];
			}
		}
	}
	printf("Maximum element of 2d array is %d.",maximum_element);
	return 0;
}
