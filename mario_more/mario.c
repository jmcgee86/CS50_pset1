#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("enter height between 0 and 23:");
    }
    while
    (height < 0 || height > 23);
    for (int row = 0; row < height; row++)
    {
        for (int spaces = 0; spaces < (height - row - 1); spaces++) //prints spaces for first half pyramid
        {
            printf(" ");
        }
        for (int hashes = 0; hashes < (row + 1); hashes++) //prints hashes for first half pyramid
        {
            printf("#");
        }
        for (int mspaces = 0; mspaces < 2; mspaces++) //prints 2 spaces before second half pyramid
        {
            printf(" ");
        }
        for (int rhashes = 0; rhashes < (row + 1); rhashes++) //prints hashes for second half pyramid
        {
            printf("#");
        }
        printf("\n");
    }
}