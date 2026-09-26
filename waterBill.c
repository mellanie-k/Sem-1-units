/*Author:Mellanie Kosgei
  Reg No:BCS-05-0543/2026
  Description:water bill calculator
*/

#include<stdio.h>

int main(){
	int units;
	float bill;
	
	printf("Enter water units consumed");
	scanf("%d",&units);
	
	if(units<=30){
		bill=units*20;
	}
	else if(units<=60){
		bill=units*25;
    }
    else{bill=units*30;
	}
	
	printf("total water bill:%.2f KES\n",bill);
	 return 0;
}