#include<stdio.h>
#include<math.h>

int main(){
	double length, width,diagonal;
	
	printf("enter the length and width:\t");
	scanf("%lf%lf",&length,&width);
	
	diagonal=sqrt(pow(length,2)+pow(width,2));
	
	printf("length%.2lf", length);
	printf("width%.2lf",width);
	printf("diagonal%.2lf",diagonal);
	
	return 0;
}