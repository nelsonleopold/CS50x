#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //This code captures user response and assigns it to getName
    string getName = get_string("What is your name?\n");
    //This code prints out a message along with the string variable getName
    printf("hello, %s\n", getName);
}