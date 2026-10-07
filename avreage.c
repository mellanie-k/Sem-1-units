#include<stdio.h>


int calculateTotal(int math,int cre,int chem){
	int totalMarks;
	totalMarks=math+cre+chem;
	
	return(totalMarks);
}
float calculateAverage(float totalMarks){
	float average;
	average=totalMarks/3;
	
	return(average);
}
void displayResults(float average){
 if(average>=50){
 	printf("Passed");
 }	
 else{
 	printf("failed");
 }
}

int main(){
	int math,cre,chem,totalMarks;
	float average;
	
	printf("Enter marks scored in math,cre and chem\t");
	scanf("%d%d%d",&math,&cre,&chem);
	
	totalMarks=calculateTotal(math,cre,chem);
	average=calculateAverage(totalMarks);
	
	printf("totalMarks=%d\n",totalMarks);
	printf("average=%.2f\n",average);
	
	displayResults(average);
	
	return 0;
}