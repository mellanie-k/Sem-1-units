/*Name: Mellanie Kosgei
  Reg No:BCS-05-0543/2026
  Description:1D array
  Date:25-10-2026
*/

#include<stdio.h>

int main(){
	float revenue[7];
	float total=0,average;
	int i;
	
	for(i=0;i<7;i++)
	{printf("Enter revenue for day %d:",i+1);
	 scanf("%f",&revenue[i]);
	}
	
	for(i=0;i<7;i++)
	{total=total+revenue[i];
	}
	
	average=total/7;
	
	printf("Total weekly revenue=%.2f\n",total);
	printf("Average daily revenue=%.2f\n",average);
	
	return 0;
}