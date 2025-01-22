/*Given matrix filled with 0s and 1s, find row with maximum 1s*/
#include<stdio.h>
#include<climits>
int main(){
	int r,c;
	int rowwithmaximumnoof1=0;
	int maximumnoof1=INT_MIN;
	int noof1=0;
	int i,j;
	printf("Enter the number of rows:\n");
	scanf("%d",&r);
	printf("Enter the number of columns:\n");
	scanf("%d",&c);
	int arr[r][c];
	printf("Enter the elements of array(0 & 1):\n");
	for(int i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("----Array----\n");
		for(int i=0;i<r;i++){
		     for(j=0;j<c;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<r;i++){
		noof1=0;
		for(int j=0;j<c;j++){
			if(arr[i][j]==1){
				noof1++;
			}
		}
		if(maximumnoof1<noof1){
			maximumnoof1=noof1;
			rowwithmaximumnoof1=i+1;
		}
	}
	printf("Row with maximum no of 1 are %d.\n",rowwithmaximumnoof1);
	printf("No of 1 in row are %d",maximumnoof1);
	return 0;
}
