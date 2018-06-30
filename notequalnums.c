#include <stdio.h>
#include <cs50.h>

int main()
{
    int hundreeds = 0;
    int dozens = 0;
    int units = 0;
    int counter = 0;
    for (int i = 102; i < 988; i++)
    {
       hundreeds = i/100;
       dozens = (i % 100) / 10;
       units = i % 10;
       if (hundreeds != dozens && dozens != units && hundreeds != units)
        {
            counter++;
        } 
    }
        printf("Total amount of numbers where all three digits not equal are: %i\n", counter);
}
