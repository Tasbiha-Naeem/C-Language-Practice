//Sum of elements of 1d array.
#include<stdio.h>
int main(){
int arr[10]={10,20,30,40,50,60,70,80,90,100};
int sum=0;
for(int i=0;i<10;i++){
  sum=sum+arr[i];
}
printf("The sum of elements of array is:%d",sum);
return 0;
}
