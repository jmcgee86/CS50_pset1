#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float changefloat;
    int coins = 0;
    int changeround = 0;
    do
    {
        changefloat = get_float("How much change is owed?");
    }
    while (changefloat < 0);

    changeround = round(changefloat * 100); //rounds change and converts to integer

    while (changeround >= 25) //while change owed is great than or equal to 25, subtracts 25 and adds one coin
    {
        changeround -= 25;
        coins++;
    }

    while (changeround >= 10) //while change owed is great than or equal to 10, subtracts 10 and adds one coin
    {
        changeround -= 10;
        coins++;
    }
    while (changeround >= 5) //while change owed is great than or equal to 10, subtracts 10 and adds one coin
    {
        changeround -= 5;
        coins++;
    }
    while (changeround >= 1) //while change owed is great than or equal to 10, subtracts 10 and adds one coin
    {
        changeround -= 1;
        coins++;
    }
    printf("%i\n", coins); //when changed owed is less than one, prints coins int, which is number fewest number of coins needed for change
}
