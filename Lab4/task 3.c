#include <stdio.h>
int main (){
	int totalrecords, missingrecords, duplicaterecords ;
	float missingpercentage;
	
	printf("Enter total number of records: ");
	scanf("%d", &totalrecords);
	
	printf("Enter number of missing records: ");
	scanf("%d", &missingrecords);
	
	printf("Enter number of duplicate records: ");
	scanf("%d", &duplicaterecords);
	
	if(totalrecords <=0) {
		printf("Invalid dataset\n");
	}
	else {
		missingpercentage=((float)missingrecords/totalrecords * 100);
		if(missingpercentage>30.0) {
			printf("Poor quality dataset\n");
		}
		else if((float)duplicaterecords/totalrecords * 100 >20.0) {
			printf("Dataset requires cleaning\n");
		}
		else {
			printf("Dataset is ready for training\n");
		}
		
	}
	return 0;
}

