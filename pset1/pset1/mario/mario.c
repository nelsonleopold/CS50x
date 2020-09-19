#include <cs50.h>
#include <stdio.h>

// Initializes function named getUserNumber
int getUserNumber(void);

int main(void)
{
    // Initializes variable named userNum and assigns the result of getUserNumber()
    int userNum = getUserNumber();

    // For loop to print each row
    for (int i = 0; i < userNum; i++)
    {

        // For loop to count out spaces
        for (int j = userNum - 1; j > i; j--)
        {
            printf("%*c", 1, ' ');
        }

        // For loop to count out #s
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}

//Prompt user for integer between 1 and 8 inclusive, re-prompt if user inputs invalid response
int getUserNumber(void)
{
    int num;
    do
    {
        num = get_int("%s", "Please enter an integer between 1 and 8: ");
    }
    while (num < 1 || num > 8);
    return num;
}