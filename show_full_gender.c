#include <stdio.h>
#include <cs50.h>

int main()
{
    printf("Please enter an shortcut for the gender (only M (m) or F (f)): \n");
    char short_g = GetChar();
    if(short_g == 'M' || short_g == 'F' || short_g == 'm' || short_g == 'f')
    {
        switch(short_g)
        {
        case 'M':
        printf("Male, sir!\n");
        break;
        case 'm':
        printf("Male, sir!\n");
        break;
        case 'F':
        printf("Female, sir!\n");
        break;
        case 'f':
        printf("Female, sir!\n");
        break;
        }
    }
    else
    printf("Pay attention, please! The are only such letters as M (m) or F (f) are available for input here!\n");
}
