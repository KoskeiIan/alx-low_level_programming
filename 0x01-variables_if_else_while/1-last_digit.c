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

  srand(time));
n = rand() - RAND_MAX /2;

lastDigit);
if (lastDigit > 5)
  printf("last digit 0f %d is %d and is  greater than 5\n", n, lastDigit);
 else if(lastDigit == 0)
   printf("last digit of %d is 0 and is 0\n",n);
 else
   printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
return (0);
}
