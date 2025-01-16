// Find total number of triplets whose sum add up to x.
#include<stdio.h>
int main(){
	int arr[6]={1,2,3,4,5,6};
	int x=10;
	int nooftriplets=0;
	for(int i=0;i<6;i++){
		for(int j=i+1;j<6;j++){
			for(int k=j+1;k<6;k++){
				if(arr[i]+arr[j]+arr[k]==x){
					nooftriplets++;
					printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
				}
			}
		}
	}
	printf("The no of triplets are %d",nooftriplets);
	return 0;
}
