#include <stdio.h>
#include <cs50.h>

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
}
