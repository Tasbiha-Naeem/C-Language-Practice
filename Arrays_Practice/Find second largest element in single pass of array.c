// Find second largest element in single pass of array.
#include<stdio.h>
#include<climits>
int main(){
	int arr[7]={1,2,3,4,5,6,7};
	int maximumelement=INT_MIN;
	int secondmaximumelement=INT_MIN;
	int temp;
	for(int i=0;i<7;i++){
		if(maximumelement<arr[i]){
			secondmaximumelement=maximumelement;	
			maximumelement=arr[i];
		}	
	}
	printf("The second maximum element of array is %d.",secondmaximumelement);
	return 0;
}
