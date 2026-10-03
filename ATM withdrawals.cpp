/*Name:Mellanie Kosgei
  Reg No:BCS-05-0543/2026
  Descripton:Atm withdrawal
*/

#include<stdio.h>

int main(){
	float balance=5500;
	float withdrawal;
	
	printf("Your balance is:%.2f\n",balance);
	
	while(balance>0){
		printf("Enter amount to withdraw:");
		scanf("%f",&withdrawal);
		
		balance=balance-withdrawal;
		if (balance>0){
			printf("Remaining balance:%.2f\n",balance);
		}
		else{printf("Balance:%.2f\n,no balance\n",balance);
		}
	}
	return 0;
}