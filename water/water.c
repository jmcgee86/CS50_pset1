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