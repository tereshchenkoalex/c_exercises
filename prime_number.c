#include <stdio.h>
#include <cs50.h>

int main()
{
    printf("Please, enter a number to check if it's prime or not: ");
    int num = GetInt();
    if(num % 1 == 0 && num % num == 0 && num != 1)
        {
            if (num % 2 == 0 && num % 3 == 0 && num % 4 == 0 && num % 5 == 0 && num != 2 && num != 3 && num != 5)
            {
                printf("This is not a prime number!\n");
            }
            else
            {
                printf("This is a prime number!\n");
            }
        }
    else
    {
        printf("This is not a prime number!\n");
    }

}


