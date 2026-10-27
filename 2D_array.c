/*Name:Mellanie Kosgei
  Reg No:BCS-05-0543/2026
  Description:2D Array
*/

#include<stdio.h>

int main(){
	int occupancy[5][10];
	int i,j;
	int occupied,vacant;
	
	for(i=0;i<5;i++)
	{printf("\nFloor %d\n",i+1);
	
	 for(j=0;j<10;j++)
	{printf("Room %d(1=occupied,0=vacant):",j+1);
     scanf("%d",&occupancy[i][j]);	
	 } 
	}
	
	for(i=0;i<5;i++)
	{occupied=0;
	 vacant=0;
	 
	for(j=0;j<10;j++)
	{ if(occupancy[i][j]==1)
	   {occupied++;
	   }
	   else{
	   	 vacant++;
	   }
	 } 
	 printf("\nFloor %d\n",i+1);
	 printf("occupied;%d\n",occupied);
	 printf("Vacant:%d\n",vacant);
	}
	return 0;
}