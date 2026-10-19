/*Name: Mellanie Kosgei
  Reg No:BCS-05-0543/2026
  Description:fare
*/

#include<stdio.h>

float calculateFare(float distance)
{return distance*50;
}

int main(){
	float distance, fare;
	printf("Enter distance in km:");
	scanf("%f", &distance);
	
	fare=calculateFare(distance);
	
	printf("Total fare=Ksh%.2f\n",fare);
	
	return 0;
}