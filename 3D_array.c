/*
Name: Harrison Kinyanjui
Reg No: CT100/G/26192/25
Description: 3D Array - Room Occupancy.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int array_chain[3][5][10];
    int room, floor, branch;
    int occupied = 0;  
    srand(time(0));    


    for (branch = 0; branch < 3; branch++)
    {
        printf("Branch %d \n", branch + 1);

        for (floor = 0; floor < 5; floor++)
        {
            printf("Floor %d: ", floor + 1);

            for (room = 0; room < 10; room++)
            {
                array_chain[branch][floor][room] = rand() % 2; 
                printf("%d ", array_chain[branch][floor][room]);

                if (array_chain[branch][floor][room] == 1)
                    occupied++;
            }
            printf("\n");
        }
    }

    printf("\nTotal number of occupied rooms across all branches: %d\n", occupied);

    return 0;
}
