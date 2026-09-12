#include <stdio.h>
int main() {
	float dataused, pricepergb, basiccost, discountamount, finalcost;
	float discountrate=0.0;
	
	printf("Enter data used (GB)\n");
	scanf("%f", &dataused);
	
	printf("Enter price per GB\n");
	scanf("%f", &pricepergb);
	
	basiccost= dataused*pricepergb;
	
	if(dataused>=200.0) {
		discountrate=0.15;
	}
	else if (dataused>=100) {
		discountrate=0.10;
	}
	else if (dataused>=50) {
		discountrate=0.05;
	}
	else {
		discountrate=0.0;
	}
	
	discountamount= basiccost*discountrate;
	finalcost= basiccost-discountamount;
	
	printf("-----Internet usage bill-----\n");
	printf("Basic cost: $%.2f\n", basiccost);
	printf("Discount ammount: $%.2f\n", discountamount);
	printf("Final cost: $%.2f\n", finalcost);
	
	return 0;
	
}
