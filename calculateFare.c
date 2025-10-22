/*
Name:Harrison Kinyanjui
Reg No:CT100/G/26192/25
Description:calculating fare
*/
#include <stdio.h>
float mutiplication(float distance);

int main(void)
{
	float distance;
	float result;
	printf("Enter distance (km):");
	scanf("%f",&distance);
	
	result = mutiplication(distance);
	printf("fare is ksh.%.2f",result);
	return 0;
}

float mutiplication(float distance){
    float fare;	
    fare = distance*50;
 return fare;
}