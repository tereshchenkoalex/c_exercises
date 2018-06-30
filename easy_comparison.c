#include <stdio.h>
#include <cs50.h>

int main()
{
    printf("Please, enter first int: \n");
    int first = GetInt();
    printf("Please, enter second int: \n");
    int second = GetInt();
    if(first < second)
    {
        printf("The smallest number is: %i\n", first);
        printf("The biggest number is: %i\n", second);
    }
    else
    {
        if(first == second)
        {
            printf("These ints are equal\n");
        }
        else
        {
        printf("The smallest number is: %i\n", second);
        printf("The biggest number is: %i\n", first);
        }
    }
}
