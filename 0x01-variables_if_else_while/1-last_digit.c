#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main -Entry pint
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
  int n;
  int lastDigit;

srand(time(0));
n = rand() - RAND_MAX /2;
lastDigit = n % 10;
if (lastDigit > 5)
printf("last digit 0f %i is %i and is  greater than 5\n", n, lastDigit);
else if(lastDigit == 0)
printf("last digit of %i is 0 and is 0\n", n );
 else
   printf("last digit of %i is %i and is less than 6 and not 0\n", n, lastDigit);
return (0);
}
