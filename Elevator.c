#include<stdio.h>
#include<stdlib.h>

// Array of floors
// Way of moving up and down floors

int main()
{
    int myArray[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = 1;

    for(int i = 1; i < 11; i)
    {
    printf("You are on floor %d \n", myArray[i]);
    printf("Which floor would you like to go to?\n");
    scanf("%d", &i);
        if(i > 10)
        {
            printf("That is not a valid floor; try again\n");
            scanf("%d", &i);
        }
    }
}