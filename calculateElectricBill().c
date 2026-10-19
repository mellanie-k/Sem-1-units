/*Name:Mellanie Kosgei
Reg No:BCS-05-0543/2026
Description:Electric bill
*/

#include<stdio.h>

float calculateElectricbill(int units){
	float bill;
	if (units<=100){
		bill=units*10;
	}
	else if(units<=200){
		bill=(100*10)+(units-100)*15;
	}
	else{
		bill=(100*10)+(100*15)+(units-200)*20;
	}
	return bill;
}
int main(){
	int units;
	float bill;
	
	printf("Enter units consumed:");
	scanf("%d",&units);
	bill=calculateElectricbill(units);
	
	printf("total elctricity bill=Ksh%.2f\n",bill);
	
	return 0;
}