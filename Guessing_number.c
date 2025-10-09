/*
Name:Harrison Kinyanjui
Reg No:CT100/G/26192/25
Description:Guessing a number
*/
#include <stdio.h>
int main(){
	int guessing_no;
	int secret_no;


    printf("Enter guessing_no (Number between 1_20)\n");
    

    // Guess 1
    printf("Enter your guess: ");
    scanf("%d", &guessing_no);

    
    while (secret_no!=7) {
        if (guessing_no >! secret_no) {
            printf("Too high!\n");
        } else {
            printf("Too low!\n");
        }

        // Guess 2
        printf("Try again: ");
        scanf("%d", &guessing_no);
    }

    printf("Congratulations! You guessed the correct number: %d\n", secret_no);

    return 0;
}

    
		
		
		
	
	

	

