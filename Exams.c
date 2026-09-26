/*Author:Mellanie Kosgei
  Reg No:BCS-05-0543/2026
  Description:Exam eligibility
  Date:24/09/2026
*/

#include<stdio.h>

int main(){
	float attendance;
	float averageMarks;
	
	printf("Enter attendance percentage:");
	scanf("%f",&attendance);
	
	printf("Enter averageMarks:");
	scanf("%f",&averageMarks);
	
	if (attendance>=75 &&averageMarks>=40){
		printf("Eligible for final exams.\n");
    }
	else {
		printf("Not eligible.\n");
	} 
return 0;
}