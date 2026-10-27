/*Name:Mellanie Kosgei Jepng'etich
  Reg No:BCS-05-0543/2026
  Description:3D Array
*/

#include<stdio.h>

int main(){
	int chain[3][5][10];
	int i,j,k;
	int occupied=0,vacant=0;
	
	for(i=0;i<3;i++)
	{ printf("\nBranch %d\n",i+1);
	 for(j=0;j<5;j++)
	  { printf("Floor %d\n",j+1);
	  for(k=0;k<10;k++)
	   { do
	       { printf("Room %d(1=occupied,0=vacant):",k+1);
	         scanf("%d",&chain[i][j][k]);
		   }
		 while(chain[i][j][k] !=0 &&chain[i][j][k] !=1);  
	   }
	  }
	}
	for(i=0;i<3;i++)
	 { for(j=0;j<5;j++)
	  { for(k=0;k<10;k++)
	     { if(chain[i][j][k]==1)
	        occupied++;
	       else
		     vacant++; 
		 }
	  }
	 }
	printf("\nTotal occupied rooms:%d\n",occupied);
	printf("Total vacant rooms:%d\n",vacant);
	
	return 0; 
}