//printf the maximum element of array.
#include<stdio.h>
#include<climits>
int main(){
  int arr[10];
  int maximum_element=INT_MIN;
  printf("Enter the elements of array:\n");
  for(int i=0;i<10;i++){
  	scanf("%d",&arr[i]);
  }
  for(int i=0;i<10;i++){
  	if(maximum_element<arr[i]){
  		maximum_element=arr[i];
	  }
  }
  printf("The maximum element of array is %d.",maximum_element);
  return 0;
}
