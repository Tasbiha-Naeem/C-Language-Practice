//Find total number of pairs whose sum add up to x.
#include<stdio.h>
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int x=10;
	int pairs=0;
	for(int i=0;i<10;i++){
	     for(int j=1+i;j<10;j++){
	     	if(arr[i]+arr[j]==x){
	     	pairs++;
	     	printf("(%d,%d)\n",arr[i],arr[j]);
		 }
	}
}
printf("Total number of pairs are %d",pairs);
return 0;
}
