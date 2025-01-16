// Reverse the Array without using extra array.
#include<stdio.h>
void reversearray(int arr[]){
	int i=0;
	int j=5;
	while(i<j){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
}
int main(){
   int arr[6];
   printf("Enter the elements of array:\n");
   for(int i=0;i<6;i++){
   	scanf("%d",&arr[i]);
   }
   reversearray(arr);
   for(int i=0;i<6;i++){
   	printf("%d ",arr[i]);
   }
   return 0;
}
