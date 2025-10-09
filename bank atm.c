/*
Name:Harrison Kinyanjui
Reg No:CT100/G/26192/25
Description:Bank ATM
*/
#include <stdio.h>
int main(){
	float Account_Balance=2000;
	float amount_to_withdraw;
	printf("Your current balance is %.0f\n",Account_Balance);
	while(Account_Balance>0)
{
	printf("Enter amount to withdraw:");
	scanf("%f", &amount_to_withdraw);
	Account_Balance-=amount_to_withdraw;
	printf("Current balance: = %.0f\n", Account_Balance);	
}
	printf("Insufficient balance (zero balance)");
	return 0;
}