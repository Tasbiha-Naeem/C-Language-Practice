//Print elements greater than x.
#include<stdio.h>
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int x;
	printf("Elements of array:\n");
	for(int i=0;i<10;i++){
	printf("%d ",arr[i]);
	}
	printf("\n");
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    for(int i=0;i<10;i++){
    if(arr[i]>x){
    printf("%d is greater than %d.\n",arr[i],x);
		}
		}
	return 0;
}
