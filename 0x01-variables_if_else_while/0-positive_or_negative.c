#include <stdio.h>
#include <time.h>

/**
 *main - Entry point
 *
 *return: Always 0(Success)
 */
int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2
      if (n > 0)
	printf "%d is a positive number" n \n;
    if (n < 0)
      printf "%d is a negative number" n \n;
    else
      printf "%d is zero" n \n;
    return (0);
}
