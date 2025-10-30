/*
Name: Harrison Kinyanjui
Reg No: CT100/G/26192/25
Description: 2D Array - Room Occupancy.
*/
#include <stdio.h>

int main()
{
    int occupancy[5][10];
    int vacanct;
    int floor, room;
    int occupied;

    for (floor = 0; floor < 5; floor++)
    {
        printf("Input occupancy for floor %d (1=occupied, 0=vacant):\n", floor + 1);

        for (room = 0; room < 10; room++)
        {
            printf("Room %d: ", room + 1);
            scanf("%d", &occupancy[floor][room]);
        }
    }

    
    for (floor = 0; floor < 5; floor++)
    {
        occupied = 0;
        vacanct = 0;

        for (room = 0; room < 10; room++)
        {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacanct++;
        }

        printf("Floor %d = Occupied: %d  Vacant: %d\n", floor + 1, occupied, vacanct);
    }

    return 0;
}
