#include<stdio.h>
int main(){
float m1=33;
float m2=40;
float m3=35;
float m4=32;
float total_marks=160;
float obtained_marks=m1+m2+m3+m4;
float percentage=(obtained_marks/total_marks)*100;
printf("Percentage:%.2f\n",percentage);
return 0;
}
