/*Name:Mellanie Kosgei
  Reg No:BCS-05-0543/2026
  Description:Password attempts
  Date:1.10.2026
*/

#include<stdio.h>

int main(){
	int password;
	
	do{
		printf("Enter password");
		scanf("%d",&password);
	}
	while(password!=1234);
		printf("Access granted");
	
	return 0;
}