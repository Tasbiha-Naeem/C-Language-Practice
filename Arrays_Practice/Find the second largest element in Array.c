//Find the second largest element in Array.
#include<stdio.h>
#include<climits>
int main(){
	int arr[8]={120,100,300,425,500,600,120,99};
	int maximumelement=INT_MIN;
	int secondmaximumelement=INT_MIN;
	for(int i=0;i<8;i++){
		if(maximumelement<arr[i]){
			maximumelement=arr[i];
		}
	}
	for(int i=0;i<8;i++){
		if(secondmaximumelement<arr[i] && arr[i]!=maximumelement){
			secondmaximumelement=arr[i];
		}
	}
	printf("The second maximum element of array is %d",secondmaximumelement);
	return 0;
}
