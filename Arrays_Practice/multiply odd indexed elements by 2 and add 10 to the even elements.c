//  Multiply odd indexed elements by 2 and add 10 to the even elements.
#include<stdio.h>
int main(){
	int arr[10]={11,22,33,44,55,66,77,88,99,110};
	for(int i=0;i<10;i++){
		int odd=1;
	  int even=0;
		if(i%2!=0){
		odd=arr[i]*2;
		printf("%d is odd index so multiply %d by 2 gives %d\n",i,arr[i],odd);
		}
		else{
		even=arr[i]+10;
		printf("%d is even index so add 10 in %d gives %d\n",i,arr[i],even);
	  	}
  	}
	 return 0;
   }








  



