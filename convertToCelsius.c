/*
Name:Harrison Kinyanjui
Reg No:CT100/G/26192/25
Description:Converting degrees celcius to Fahmerits
*/
#include <stdio.h>

 float convert_to_celcius(float F);
int main(){
	float C;
	float F;
			
	printf("Enter temperature in F:");
	scanf("%f",& F);
	
	C= convert_to_celcius(F);
	printf("results in celcius is =%.1fcelcius",C);
	
	
	return 0;
}

 float convert_to_celcius(float F){ 
  float C;

	C = (F-32)*5/9;
 return C;
}















	