#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get the height of the stairs from the user
    int height;
    do
    {
        do
        {
            height = get_int("Height: ");
        }
        while (height > 8);
    }
    while (height < 1);
    
    // Creates each row
    for (int row = 0; row < height; row++)
    {
        // Creates the spaces.
        for (int dots = (height - 1); dots > row; dots--)
        {
            printf(" ");
        }
        // Creates the hashtags
        for (int column = -1; column < row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}
