#include<stdio.h>
int main(){
int a,b,q;
printf("Enter the value of a:\n");
scanf("%d",&a);
printf("Enter the value of b:\n);
scanf("%d",&b);
q=a/b;
int r=a-(b*q);
printf("Remainder is %d",r);
return 0;
}
