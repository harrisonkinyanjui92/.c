/*
Name:Harrison kinyanjui
Reg No:CT100/G/26192/25
Description:Password access
*/
#include <stdio.h>

int main(){
	int password;

	do{
	printf("Enter password:");
	scanf("%d",&password);
	
	if (password!=1234){
	
		printf("Try again. incorrect password\n");}
	} while (password!= 1234);
    
	 printf("Access granted\n");
 return 0;
}
		
	


	
	

	


