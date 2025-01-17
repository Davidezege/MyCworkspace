#include "cs50.h"
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("Total number of coins: %i\n", coins);
}

int get_cents(void)
{
    // TODO
    int noOfCents;
    do
    {
        noOfCents = get_int("Number of cents owed: ");
    } while (noOfCents < 0);

    return noOfCents;
}

int calculate_quarters(int cents)
{
    // TODO

    int i = 0;
    while (cents >= 25)
    {
        cents = cents - 25;
        i++;
    }

    return i;
}

int calculate_dimes(int cents)
{
    // TODO

    int i = 0;
    while (cents >= 10)
    {
        cents = cents - 10;
        i++;
    }

    return i;
}

int calculate_nickels(int cents)
{
    // TODO

    int i = 0;
    while (cents >= 5)
    {
        cents = cents - 5;
        i++;
    }

    return i;
}

int calculate_pennies(int cents)
{
    // TODO

    int i = 0;
    while (cents >= 1)
    {
        cents = cents - 1;
        i++;
    }

    return i;
}
