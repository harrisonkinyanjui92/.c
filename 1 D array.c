/*
Name:Harrison Kinyanjui
Reg No:CT100/G/26192/25
Description:1D array weekly revenue tracker
*/
#include <stdio.h>

int main()
{
	int i=0;
	int revenue[7];
	int	Total_weekly_revenue=0;
	int Average;


	printf("__________==========________\n");
	for(i=0; i<7;i++)
	{
		printf("Input revenue day %d:",i+1);
		scanf("%d",&revenue[i]);
		Total_weekly_revenue+= revenue[i];
		Average=Total_weekly_revenue/7;
	}
	printf("Total_weekly_revenue is %d\n",Total_weekly_revenue);	
	printf("Average is %d\n",Average);

	return 0;
}