/*
Name:Harrison Kinyanjui
Reg No:CT100/G/26192/25
Description:calculating electric bill
*/
#include <stdio.h>
float electricbill(float units);
int main()
{
	float units;
	float Total_bill;
	
	printf("Enter No of units:");
	scanf("%f", &units);
	
	Total_bill=electricbill(units);
	
	printf("bill is ksh.%.2f",Total_bill);
	return 0;
}

float electricbill(float units){
	float bill;
	if(units>101){
		bill=15*units;
	}
    if(units<100 ){
		bill=10*units;
	}
	if(units>200)
    {
		bill=20*units;
	}
return bill;
}

