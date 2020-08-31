#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, stack, column, space;                               //List of Integers needed. single numbers.
    do
    {
    height = get_int("Enter height here:");                         //Get our height int by asking for it.
    }
    while(height < 1 || height > 8);                                //Only allow height between 1 and 8.

    for(stack = 0; stack < height; stack++)                         //Stack height starts 0 as always. If stack less than heigh, Add 1.
    {
        for(space = 0; space < height - stack - 1; space++)         //For space between pyramids. if space under height - stack - 1. Add 1 space.
        {
            printf(" ");                                            //Print a space, to be a space. duuh.
        }
        for(column = 0; column <= stack; column++)                  //For number of columns. start 0. if column less than or greater than stack height. add column.
        {
            printf("#");
        }
        printf("  ");
        for(column = 0; column <= stack; column++)                  //For second pyramid. copy and paste first pyramid column number for mirror.
        {
            printf("#");
        }
        printf("\n");
    }
}