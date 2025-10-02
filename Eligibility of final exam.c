/*
Name:Harrison Kinyanjui
Reg No:CT100/G/26192/25
Description:Eligibility of final exam
*/
#include <stdio.h> //printf //scanf
int main(){
	float attendance;
	int average_marks;
	
	printf("attendance: \t"); // \t,tab (1 space)
	scanf("%f", &attendance); //take user input
	
	printf("average_marks: \t"); //\t,tab (1 space)
	scanf("%d", &average_marks);
	
	//Eligibility	
	if(attendance>=0.75 & average_marks>=40)
	{printf("eligible for exam \n");}
	else
		{printf("Not eligible for exam\n");}	

return 0;
}