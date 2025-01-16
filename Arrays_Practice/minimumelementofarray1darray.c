//print the minimum element of array.
#include<stdio.h>
#include<climits>
int main(){
int arr[10];
int minimum_element=INT_MAX;
printf("Enter the elements of array:\n");
for(int i=0;i<10;i++){
  scanf("%d",&arr[i]);
}
for(int j=0;j<10;j++){
   if(minimum_element>arr[j]){
     minimum_element=arr[j];  
   }   
}
printf("The minimum element of array is %d.",minimum_element);
return 0;
}
