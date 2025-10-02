/*
Name:Harrison Kinyanjui
Reg No:CT100/G/26192/25
Description:Mobile Data Bundles Purchace
*/
#include <stdio.h>
int main(){
	int Option_NO;

	printf("Select data bundle:\n");
	printf("1. 100MB @ 50 KES\n");
	printf("2. 500MB @ 200 KES\n");
	printf("3. 1GB   @ 350 KES\n");
	printf("4. 2GB   @ 600 KES\n");
	
		printf("Enter your choice (1-4):");
	    scanf("%d", &Option_NO);
	
	if(Option_NO ==1){
	printf("You selected 100MB. cost = 50 KES\n");}
	
  	else if(Option_NO==2)
    	{printf("You selected 500MB.cost = 200 KES\n");}
    		
	else if(Option_NO==3)
		{printf("You selected 1GB. cost = 350 KES\n");}
			
    else if(Option_NO==4)
		{printf("You selected 2GB. cost = 600 KES\n");}
			
	else
			{printf("Invalid choice\n");}		
			
			
		
	return 0;
}