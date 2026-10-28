//c files
#include <stdio.h> //scanf(), printf(), fopen
#include<stdlib.h>//exit()

int main(){
	FILE*fptr;
	char sentence[300];
	fptr=fopen("C:\\Users\\user\\Documents\\Cfiles\\data.txt","w");
	if(fptr==NULL){
		printf("Error poening the file\n");
	
     	exit(1);
    }
	
	printf("Enter a sentence/paragraph\t");
	//scanf("%s",&sentence);//
	fgets(fptr,sizeof(sentence),stdin);
	
	//write to file
	fprintf(fptr,"This is a sentence %s\n",sentence);
	//close the file
	fclose(fptr);
	
	printf("File written succefully");
	
		return 0;
}