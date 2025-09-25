/*
Name:Harrison Kinyanjui
Reg No:CT100/G/26192/25
Description:Eligibility of a loan
*/
#include <stdio.h>
int main(){
	int age;
	int annual_income;
	
	printf("Enter your age:");
	scanf("%d", &age);
	
	printf("Enter annual income:");
	scanf("%d", &annual_income);
	
	//Loan Eligibility
	if(age>=21 & annual_income>=21000){
    printf("Cogratulations you qualify for a loan\n");}
else
   {printf("Unfortunately we are unable to offer you loan at this time\n");}

	
	return 0;
}