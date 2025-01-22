//transpose of a matrix
#include<stdio.h>
int main(){
int r,c;
printf("Enter the number of rows:\n");
scanf("%d",&r);
printf("Enter the number of columns:\n");
scanf("%d",&c);
int arr[r][c];
int i,j;
  printf("Enter the elements of array:");
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
  printf("Transpose of a matrix:\n");
  for(i=0;i<c;i++){
    for(j=0;j<r;j++){
         printf("%d ",arr[j][i]);
    }
    printf("\n");
  }
 
return 0;
}
