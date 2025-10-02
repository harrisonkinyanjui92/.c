/*
Name: Harrison Kinyanjui
Reg No:CT100/G/26192/25
Description:Water bill calculator
*/
#include <stdio.h>
int main(){
	int No_of_water_units_consumed;
	float Total_Bill;
	
	printf("Enter No_of_water_units_consumed:\t");// \ tab,(1 space)
	scanf("%d", &No_of_water_units_consumed);
	
	//Total Bill
	if(No_of_water_units_consumed<30)
	{Total_Bill = 20 * No_of_water_units_consumed;}
				
    else if
	(No_of_water_units_consumed>30 && No_of_water_units_consumed<60)
	{Total_Bill = 25 * No_of_water_units_consumed;}
		
	else 
        {Total_Bill = 30 * No_of_water_units_consumed;}	

			
	printf("Total_Bill is %.2fKES\n",Total_Bill);			
	
 return 0;
}