/*Author:Mellanie Kosgei
  Reg No:BCS-05-0543/2026
  Description:Data bundles purchase
*/

#include<stdio.h>

int main(){
	int choice;
	
	printf("Mobile data bundles\n");
	printf("1.100MB@50KES\n");
	printf("2.500MB@200KES\n");
	printf("3.1GB@350KES\n");
	printf("4.2GB@600KES\n");
	
	printf("Enter your choice (1-4):");
	scanf("%d",&choice);
	
	switch (choice){
		case 1:
			printf("Bundle:100MB\n");
			printf("Cost:50KES\n");
			break;
		case 2:
		    printf("Bundle:500MB\n");
			printf("Cost:200KES\n");
			break;
		case 3:
			printf("Bundle:1GB\n");
			printf("Cost:350KES\n");
			break;
		case 4:
			printf("Bundle:2GB\n");
			printf("Cost:600KES\n");
			break;
		default:
			printf("invalid choice\n");
	}
	return 0;
}