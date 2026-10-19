/*Name: Mellanie Kosgei Jepng'etich
Reg No:BCs-05-0543/2026
Description:convert Fahnheit>celcius
*/

#include<stdio.h>

float convertTocelcius(float fahrenheit){
	return (fahrenheit-32)*5.0/9.0;
}
int main(){
	float fahrenheit, celcius;
	
	printf("Enter temp in Fahrenheit:");
	scanf("%f",&fahrenheit);
	
	celcius=convertTocelcius(fahrenheit);
	
	printf("Temperature in celcius=%.2f\n",celcius);
	
	return 0;
}