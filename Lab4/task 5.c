#include <stdio.h>
int main() {
	int userrole, accountstatus, securitylevel;
	
	printf("Enter user role (1= Admin, 2= Reasearcher, 3= Student)\n");
	scanf("%d", &userrole);
	
	printf("Enter account status (1= Active, 0= Inactive)\n");
	scanf("%d", &accountstatus);
	
	printf("Enter security level\n");
	scanf("%d", &securitylevel);
	
	if(accountstatus==0) {
		printf("Access denied\n");
	}
	else if (userrole==1 && securitylevel>=3) {
		printf("Access granted (Admin access)\n");
	}
	else if (userrole==2 && securitylevel>=2) {
		printf("Access granted (Reasearcher access)\n");
	}
	else if (userrole==3 && securitylevel>=1) {
		printf("access granted (Student access)\n");
	}
	else {
		printf("Acess denied\n");
	}
	return 0;

}
