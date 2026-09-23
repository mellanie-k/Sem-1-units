/*Author:Mellanie Kosgei
Reg No:BCS-05-0543/2026
Date:16.09.2026
Version 1
*/

#include<stdio.h>

int main(){
	float height;
	double balance;
	char phone[20];
	
	printf("Enter your height: \t");
	scanf("%f",&height);
	printf("Enter your bank balance(kes): \t");
	scanf("%lf",&balance);
	printf("Enter your phone number: \t");
	scanf("%s",&phone);
	
	printf("My height is %.2f metres \n",height);
	printf("The bank balance is KES%.2lf \n",balance);
	printf("My phone number is %s",phone);
	
	return 0;
	
	
}