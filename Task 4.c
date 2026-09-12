#include <stdio.h>
int main() {
	float accuracy, latency;
	int approvalstatus ;
	
	printf("Enter model accuracy (%%)");
	scanf("%f", &accuracy);
	
	printf("Enter prediction latency (ms)");
	scanf("%f", &latency);
	
	printf("Enter model aproval status (1=approved, 0 = not approved)\n");
	scanf("%d", &approvalstatus);
	
	if(accuracy>=90.0 && latency<=100.0 && approvalstatus==1) {
		printf("Model deployed succesfully\n");
	}
	else {
		printf("Model cannot be deployed\n");
		if(accuracy<90.0) {
			printf("-Accuracy too low\n");
		}
		if(latency>100.0) {
			printf("-latency too high\n");
		}
		if(approvalstatus!= 1) {
			printf("-Model not approved\n");
		}
	}
	return 0;
	
}
