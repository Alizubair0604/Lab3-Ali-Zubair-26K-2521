#include <Stdio.h>
int main() {
	float confidencescore;
	printf("Enter confidence score (0 - 100)\n");
	scanf("%f", &confidencescore);
	
	if (confidencescore<0 || confidencescore>100) {
		printf("Invalid score\n");
	}
	else if(confidencescore>=0 && confidencescore<=49) {
		printf("Low confidence\n");
	}
	else if(confidencescore>=50 && confidencescore<=79) {
		printf("Moderate confidence\n");
	}
	else { 
	printf("High confidence\n");
	}
	return 0;
}
