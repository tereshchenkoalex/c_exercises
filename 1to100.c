#include <stdio.h>

#define max_num 100

int main()
{
   int total_sum = 0;
   for (int i = 1; i <= max_num; i++)
   {
        total_sum = total_sum + i;
   }
   printf("Total sum of all integers from 1 to 100 is %i\n", total_sum);
}
