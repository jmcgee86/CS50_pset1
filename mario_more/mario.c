// prc-matt - see comments in mario less regarding spacing between different parts of the code
// prc-matt - the program runs and does not take negative numbers or anything over 23
// prc-matt - see comment in mario less regarding space after 23:
// prc-matt - this actually improves on the mario less code because it uses all the same great descriptive variables but also adds in comments in the for loops to say what each one is doing

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