// prc-matt - the program works as it should. i tried negative numbers and they do not take thanks to the do while loop.
// prc-matt - one suggestion i would make is to add comments. even with a short program it is nice to be able to instantly look at it and see what is going on
// prc-matt - along that note, maybe a more descriptive variable name for length would be easier to read. minutes would fit in there
// prc-matt - the indentation seems to be perfect


#include <stdio.h>
#include<cs50.h>

int main(void)
{
    int length;
    do
    {
        length = get_int("minutes:");
    }
    while (length < 0);
    int bottles = length * 12;
    printf("bottles: %i\n", bottles);
}