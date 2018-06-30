#include <stdio.h>
#include <cs50.h>

int main()
{
    int integer = 0;
    do
    {
        printf("Please, enter an int: ");
        integer = GetInt();
    }
    while (integer != 0);
}
