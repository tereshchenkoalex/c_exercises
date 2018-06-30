#include <stdio.h>
#include <cs50.h>

void biggest(array[5]);

int main()
{
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        printf("array[%i] = ", i+1);
//        scanf("%i", &array[i]);
        array[i] = GetInt();
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
    
    biggest(array[5]);
}

void biggest(array[5])
{
    int biggest_int = 0;
    for (int i = 1; i < 6; i++)
    {
        if (array[i] > biggest_int)
        {
            biggest_int = array[i];
        }
        return biggest_int;
    }
}
