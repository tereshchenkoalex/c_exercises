#include <stdio.h>
#include <cs50.h>

int main()
{
    printf("Please enter an integer from 1 to 7: \n");
    int daynum = GetInt();
    
    if(daynum < 1 || daynum > 7)
    {
        printf("Attention, please! There are only 7 days in any week on the Earth!\n");
        printf("Please, enter an integer ONLY from 1 to 7 next time!\n");
    }
    else
    {
        switch(daynum)
        {
        case 1:
        printf("Monday today, sir!\n");
        break;
        case 2:
        printf("Tuesday today, sir!\n");
        break;
        case 3:
        printf("Wednesday today, sir!\n");
        break;
        case 4:
        printf("Thursday today, sir!\n");
        break;
        case 5:
        printf("Friday today, sir!\n");
        break;
        case 6:
        printf("Saturday today, sir!\n");
        break;
        case 7:
        printf("Sunday today, sir!\n");
        break;
        }
    }
}
