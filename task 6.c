#include <stdio.h>
int main()   {
	int obstacle, person, battery;
	
	printf("Obstacle detected? (1=Yes, 0=No)\n");
	scanf("%d", &obstacle);
	
	printf("Person detected? (1=Yes, 0=No)\n");
	scanf("%d", &person);
	
	printf("Enter batter percentage\n");
	scanf("%d", &battery);
	
	if(obstacle==1) {
		if(person==1) {
			printf("Emergency stop\n");
		}
		else {
			printf("Change direction\n");
		}
	}
	else {
		if (battery<20) {
			printf("Return to charging station\n");
		}
		else {
			printf("Continue moving\n");
		}
	}
	return 0;
}
