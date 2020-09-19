#include <cs50.h>
#include <stdio.h>
#include <math.h>

//This program asks user how much change is owed, then calculates the minimum number of coins with which that change can be made


float getUserNumber(void);

int main(void)
{
    //Rounds to nearest penny, then converts to integer
    int cents = round(getUserNumber() * 100);
    int howManyCoins(int cents);

    //Prints the number of coins
    printf("%i\n", howManyCoins(cents));
}

//Prompts use for amount owed, re-prompts if user gives invalid input
float getUserNumber(void)
{
    float num;
    do
    {
        num = get_float("%s", "How much change is owed: ");
    }
    while (num < 0);
    {
        return num;
    }
}

//Calculates how many coins

int howManyCoins(cents)
{
    //Initializes functions and the counter variable
    int howManyQuarters(int cents);
    int howManyDimes(int cents);
    int howManyNickels(int cents);
    int howManyPennies(int cents);
    int counter;

    //First a function is called to calculate how many quarters, that result is returned and stored in a counter. Then
    //we run modulus on the amount to get the remainder which is then plugged into the function to calculate how many
    //dimes. This is repeated for nickels and pennies.
    counter = howManyQuarters(cents);
    cents = cents % 25;
    counter += howManyDimes(cents);
    cents = cents % 10;
    counter += howManyNickels(cents);
    cents = cents % 5;
    counter += howManyPennies(cents);
    return counter;
}

//Calculate how many quarters
int howManyQuarters(cents)
{
    int num;
    return num = cents / 25;
}

//Calculate how many dimes
int howManyDimes(cents)
{
    int num;
    return num = cents / 10;
}

//Calculate how many nickels
int howManyNickels(cents)
{
    int num;
    return num = cents / 5;
}

//Calculate how many pennies
int howManyPennies(cents)
{
    int num;
    return num = cents / 1;
}