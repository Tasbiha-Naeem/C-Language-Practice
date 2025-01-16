//print the product of elements of array.
#include<stdio.h>
int main(){
  int arr[5];
  int product=1;
  printf("Enter the elements of array:\n");
  for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
  }
  for(int j=0;j<5;j++){
    product=product*arr[j];
  }
  printf("The product of elements of array is %d",product);
  return 0;
}
