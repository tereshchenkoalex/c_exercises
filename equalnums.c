#include <stdio.h>
#include <cs50.h>


int main()
{
    int hundreeds = 0;
    int dozens = 0;
    int units = 0;
    int counter = 0;
    printf("Please, enter three-digit number: \n");
    int tdnum = GetInt();
    int tdnum_chk = tdnum;
    
    while (tdnum_chk > 0)
    {
        tdnum_chk = tdnum_chk / 10;
        counter++;
    }
    if (counter == 3)
    {
       hundreeds = tdnum/100;
       dozens = (tdnum % 100) / 10;
       units = tdnum % 10;
        if (hundreeds == dozens && dozens == units)
        {
            printf("Congratulations!!! All three numbers are equal! Bonus ice cream incoming! (No)\n");
        }
        else
        {
            printf("Three numbers are not equal :( \n");
        }
    }
    else
    printf("Number must consists of THREE DIGITS!\n");
}
