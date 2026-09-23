/*Author:Mellanie Kosgei
Reg No:BCS-05-0543/2026
Date:16.09.2026
*/

//Volume and surface area of cylinder

#include<stdio.h>
int main(){
	float radius, height;
	float volume,surfaceArea;
	float pi=3.142;
	
	printf("Enter the radius:");
	scanf("%f",&radius);
	
	printf("Enter the height:");
	scanf("%f",&height);
	
	volume=pi*radius*radius*height;
	surfaceArea=2*pi*radius*radius+2*pi*radius*height;
	
	printf("volume=%.3f \n",volume);
	printf("surfaceArea=%.3 \n",surfaceArea);
	
	return 0;
}