#include <stdio.h>
int main () {
	double num1, num2, num3;
		printf("Enter three numbers\n");
		scanf("%lf %lf %lf", &num1, &num2, &num3);
		
		if(num1==num2 && num2==num3) {
			printf("All three numbers are equal: %.2lf\n", num1);
			
		}
		else if(num1>=num2 && num1>=num3) {
			if(num1==num2) {
				printf("The greatest numbers are num1 and num2: %.2lf\n", num1);
			}
			else if(num1==num3) {
				printf("The greatest numbers are num1 and num3: %.2lf\n", num1);
			}
			else {
				printf("The greatest number is num1: %.2lf\n", num1);
			}
		}
		else if(num2>=num1 && num2>=num3) {
			if(num2==num3){
				printf("The greatest numbers are num2 and num3: %.2lf\n",num2);
			}
			else {
				printf("The greatest number is num2: %.2lf\n", num2);
			}
		}
		else {
			printf("The greatest number is num3: %.2lf\n",num3);
		}
		return 0;
			
}
