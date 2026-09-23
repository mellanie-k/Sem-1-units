#include<stdio.h>

int main(){
	int BookID, dueDate, returnDate;
	int daysOverdue, finerate, fineAmount;
	
	printf("Enter BookID:\t");
	scanf("%d",&BookID);
	printf("Enter dueDate:\t");
	scanf("%d",&dueDate);
	printf("Enter returnDate:\t");
	scanf("%d",&returnDate);
	
    daysOverdue=returnDate-dueDate;
    
	if(daysOverdue>=15){
		finerate=100;
		fineAmount=daysOverdue*finerate;
	}
	else if(daysOverdue>=8 &&daysOverdue<14){
		finerate=50;
		fineAmount=daysOverdue*finerate;
	}
	else if(daysOverdue>=0 &&daysOverdue<7){
		finerate=20;
		fineAmount=daysOverdue*finerate;
    }
    else{
    	finerate=100;
    	fineAmount=daysOverdue*finerate;
	}
	
	printf("BookID:%d \n",BookID);
	printf("dueDate:%d \n",dueDate);
	printf("returnDate:%d \n",returnDate);
	printf("daysOverdue:%d \n",daysOverdue);
	printf("finerate:%d \n",finerate);
	printf("fineAmount:%d \n",fineAmount);
	
	return 0;
}