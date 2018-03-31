#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    long long number;
    long long check_number;
    int sum_multiply = 0;
    int last_digit = 0;
    int sum_other = 0;
    int sum_all = 0;
    string cardtype = "INVALID";
    do
    {
        number = get_long_long("Number:");
    }
    while
    (number <= 0);

    check_number = number;

    if (number > 340000000000000 && number < 349999999999999) //checks if user input is valid AMEX number
    {
        cardtype = "AMEX";
        //printf("%s\n", cardtype);
    }
    else if (number > 370000000000000 && number < 379999999999999) //checks if user input is valid AMEX number
    {
        cardtype = "AMEX";
    }
    else if (number > 5100000000000000 && number < 5599999999999999)//checks if user input is valid MasterCard number
    {
        cardtype = "MASTERCARD";
    }
    else if (number > 4000000000000 && number < 4999999999999) //checks if user input is valid VISA number
    {
        cardtype = "VISA";
    }
    else if (number > 4000000000000000 && number < 4999999999999999) //checks if user input is valid VISA number
    {
        cardtype = "VISA";
    }
    else
    {
        cardtype = "INVALID";
        printf("%s\n", cardtype); //prints INVALID if number entered is not a valid cc number before going through final checksum validation
        return 0;
    }
    while (check_number > 0)
    {
        int second_last = ((check_number / 10) % 10); //access the second the last digit

        if (second_last >= 5)
        {
            sum_multiply +=  1 + ((2 * second_last) % 10); //adds 2 digits of product of second to last digit if it is greater than 10
        }
        else
        {
            sum_multiply = sum_multiply + (2 * second_last); //adds product of second to last digit times 2 if it is less than 10
        }

        last_digit = check_number % 10; //access the last digit

        sum_other += last_digit; // add last digit to sum of digits that are not multiplied

        check_number = check_number / 100; //removes last 2 digits, which have already been used, from the number

    }

    sum_all = sum_multiply + sum_other; //sums all multiplied digitis and remainding digits

    if (sum_all % 10 != 0) //checks if sum of all multiplied digits and remainding digits ends in 0
    {
        cardtype = "INVALID";
    }

    printf("%s\n", cardtype);
    return 0;
}