#include <stdio.h>
#include <cs50.h>

void swap(int* i, int* j);

int main()
{
    printf("Please, enter first int: \n");
    int first = GetInt();
    printf("Please, enter second int: \n");
    int second = GetInt();
    swap(&first, &second);
    printf("Now first integer is %i\n", first);
    printf("And second integer is %i\n", second);    
}

void swap(int* i, int* j)
{
    int temp_var = *i;
    *i = *j;
    *j = temp_var;
}
