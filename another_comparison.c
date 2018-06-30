#include <stdio.h>
#include <cs50.h>

int main()
{
    printf("Please, enter first int: \n");
    int first = GetInt();
    printf("Please, enter second int: \n");
    int second = GetInt();
    printf("Please, enter third int: \n");
    int third = GetInt();
    if(first > second && first > third)
    {
        printf("First integer (%i) is the biggest one!\n", first);
    }
    else
    {
        if(second > first && second > third)
        {
            printf("Second integer (%i) is the biggest one!\n", second);    
        }
        else
        {
            if (third > first && third > second)
            {
                 printf("Third integer (%i) is the biggest one!\n", third);
            }
        }
    }
}
