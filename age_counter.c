#include <stdio.h>
#include <cs50.h>

#define known_year 2008
#define known_month 3

int main()
{
    int age_years = 0;
    int age_month = 0;
    printf("Please, enter the year of birth: \n");
    int year = GetInt();
    printf("Please, enter the month of birth: \n");
    int month = GetInt();
    printf("So, you entered the next month and year of birth: %i year and %i month\n", year, month);
    printf("Thank you. Please, wait. Calculating...\n");
    if(year < known_year || month > 12 || month <= 0)
    {
        printf("You entered the year which is lesser than year of birth or month number may be more than 12 or your month number is lesser or equal to 0\n");
    }
    else
    {
    if(year == 2008 && month < known_month)
    {
        printf("These year and month are very close to the date of birth, but they are before it anyway\n");
    }
    else
    {
    age_years = year - known_year;
    age_month = month - known_month;
    if (month < known_month)
    {
        age_years = age_years - 1;
        age_month = 12 + age_month;
    }
    printf("Age of this person is %i years and %i month\n", age_years, age_month);
    }
    }
}
