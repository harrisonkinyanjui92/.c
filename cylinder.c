/*
Name:Harrison Kinyanjui
REg No:CT100/G/26192/25
Description:user to enter radius and height of a cylinder
*/
#include <stdio.h> 
#define pi 3.14159
  
int main(){
	float radius, height, volume, surface_area;
	
	//prompt the the user to input			
	printf("Enter radius:");
	scanf("%f", &radius);
	
	//prompt the user to enter height	
	printf("Enter height:");
	scanf("%f", &height);
	
	//compute volume and surface_area
	volume = pi * radius * radius * height;
	surface_area =2 * pi * radius * radius * +2 * pi * radius * height;
	
	
	//Display 
	printf("volume is %.2f\n",volume);
    printf("surface_area is %.2f\n", surface_area);
    
    return 0;
}
	