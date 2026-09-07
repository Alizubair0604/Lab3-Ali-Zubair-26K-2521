#include <stdio.h>
int main() {
	char ProductName[50];
	int Quantity;
	float Price;
	
	printf("Enter product name: ");
	scanf("%s", ProductName);
	
	printf("Enter quantity: ");
	scanf("%d", &Quantity);
	
	printf("Enter price: ");
	scanf("%f", &Price);
	
	printf("Product name: %s\n", ProductName);
	printf("Quantity: %d\n", Quantity);
	printf("Price: %.2f\n", Price);
	
	return 0;

}
