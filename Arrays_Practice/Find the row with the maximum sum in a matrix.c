/*Find the row with the maximum sum in a matrix*/
#include<stdio.h>
#include<climits>
int main(){
	int maximumsumofrow=INT_MIN;
	int r,c;
	int i;
	int j;
	int sum=0;
	int row=0;
	printf("Enter the number of rows:\n");
	scanf("%d",&r);
	printf("Enter the number of columns:\n");
	scanf("%d",&c);
	int arr[r][c];
	printf("Enter the elements of array:\n");
	for( i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("-----Array------\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++){
		sum=0;
		for(j=0;j<c;j++){
			sum+=arr[i][j];
		}
		if(maximumsumofrow<sum){
			 maximumsumofrow=sum;
			 row=i+1;
		}
	}
	printf("Maximum sum:%d\n",maximumsumofrow);
	printf("Row number:%d\n",row);
	return 0;
}
