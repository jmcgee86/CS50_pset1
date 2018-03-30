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

    changeround = round(changefloat * 100);

    while (changeround >= 25)
    {
        changeround -= 25;
        coins++;
    }

    while (changeround >= 10)
    {
        changeround -= 10;
        coins++;
    }
    while (changeround >= 5)
    {
        changeround -= 5;
        coins++;
    }
    while (changeround >= 1)
    {
        changeround -= 1;
        coins++;
    }
    printf("%i\n", coins);
}
