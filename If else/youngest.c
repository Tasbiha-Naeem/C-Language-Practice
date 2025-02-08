#include<stdio.h>
int main(){
	int Ram,Shyam,Ajay;
	printf("Enter the age of Ram:\n");
	scanf("%d",&Ram);
	printf("Enter the age of Shyam:\n");
	scanf("%d",&Shyam);
	printf("Enter the age of Ajay:\n");
	scanf("%d",&Ajay);
	if(Ram<Shyam && Ram<Ajay){
		printf("Ram is the youngest.\n");
	}
	if(Shyam<Ram && Shyam<Ajay){
		printf("Shyam is the youngest.\n");
	}
	if(Ajay<Ram && Ajay<Shyam){
		printf("Ajay is the youngest.\n");
	}
	return 0;
}
