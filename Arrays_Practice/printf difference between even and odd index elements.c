 //Print difference b/w odd indexed and even indexed elements.
#include<stdio.h>
int main(){
	int arr[6]={11,12,13,14,15,16};
	int evensum=0;
	int oddsum=0;
	int difference;
	for(int i=0;i<6;i++){
	if(i%2!=0){
	oddsum+=arr[i];
	}
	else{
	evensum+=arr[i];
	}
	  }
	 difference=oddsum-evensum;
	 printf("The difference between odd and even index elements is %d.",difference);
	 return 0;
}
