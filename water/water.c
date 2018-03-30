#include <stdio.h>
#include<cs50.h>

int main(void)
{
    int length = get_int("minutes:");
    int bottles = length * 12;
    printf("bottles: %i\n", bottles);
}