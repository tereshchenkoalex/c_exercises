#include <stdio.h>
#include <cs50.h>

int main()
{
    printf("There are such telephone codes such as:\n");
    printf("100 for the telephone call to City 1\n");
    printf("200 for the telephone call to City 2\n");
    printf("300 for the telephone call to City 3\n");
    printf("400 for the telephone call to City 3\n");
    printf("Please, choose [wisely] city to call: \n");
    int code = GetInt();
    float price1 = 4.15;
    float price2 = 1.98;
    float price3 = 3.05;
    float price4 = 5.10;
    float result1 = 0;
    float result2 = 0;
    float result3 = 0;
    float result4 = 0;
    
    
    if(code == 100 || code == 200 || code == 300 || code == 400)
    {
        switch(code)
        {
            case 100:
            result1 = price1 * 10;
            printf("Price for the 10-minute phone call to the City 1 will be: %.2f\n", result1);
            break;  
            case 200:
            result2 = price2 * 10;
            printf("Price for the 10-minute phone call to the City 2 will be: %.2f\n", result2);
            break;
            case 300:
            result3 = price3 * 10;
            printf("Price for the 10-minute phone call to the City 3 will be: %.2f\n", result3);
            break; 
            case 400:
            result4 = price4 * 10;
            printf("Price for the 10-minute phone call to the City 4 will be: %.2f\n", result4);
            break;     
        }
    }
    else
    printf("Please, be careful. Only codes 100, 200, 300, 400 are allowed!\n");
}
