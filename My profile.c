//Simple c program (Hello World),Single line command
/*
Name:Harrison Kinyanjui
Reg No: CT100/G/26192/25
Desciption:Personal Profile
*/

#include <stdio.h>

//main function
int main()
{
	int height;
	int phonenumber;
	int weight;
	
	printf("Enter your height:");
	scanf("%d",&height);
	
	printf("Enter phone number:");
	scanf("%d",&phonenumber);
	
	printf("Enter your weight:");
	scanf("%d",&weight);
	
	printf("Your height is %d cm\n",height);
	printf("Your phonenumber is %d\n",phonenumber);
	printf("Your weight is %d kg\n",weight);
	
	return 0;
}