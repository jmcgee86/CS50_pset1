// prc-matt - the program works as it should. negative numbers do not take and anyhting over 23 does not take
// prc-matt - indentation is great, but one suggestion is to separate lines of code by what they are doing. see below
// prc-matt - all variable names are descriptive, so no need for comments to say what they are
// prc-matt - this is just to be nit-picky, but on line 15, a space between 23: and the end of the string would help the user read the get_int line easier
// prc-matt - i like how in your for loops, you name the integers descriptively. makes it a lot easier to tell what is going on

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
    // prc-matt - a space here would make it easier to see where the separation of different parts of the code are
    for (int row = 0; row < height; row++)
    {
        for (int spaces = 0; spaces < (height - row - 1); spaces++)
        {
            printf(" ");
        }
        for (int hashes = 0; hashes < (row + 2); hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}