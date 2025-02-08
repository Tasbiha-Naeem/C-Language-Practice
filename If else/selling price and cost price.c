#include<stdio.h>
int main(){
	int selling_price,cost_price,profit,loss;
	printf("Enter the selling price:\n");
	scanf("%d",&selling_price);
	printf("Enter the cost_price:\n");
	scanf("%d",&cost_price);
	if(selling_price>cost_price){
		printf("Profit.\n");
		profit=selling_price-cost_price;
		printf("Profit earned is %d.\n",profit);
	}
	else if(selling_price==cost_price){
		printf("No profit,no loss\n");
	}
	else{
		printf("Loss\n");
		loss=cost_price-selling_price;
		printf("Loss incurred %d:\n",loss);
	}
	return 0;
}
