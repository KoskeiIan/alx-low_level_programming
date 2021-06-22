#include "holberton.h"

/**
 *jack_bauer - prnts every minute of jack bauer 00:00 to 23:59
 *
 *Return: (void)
 */

void jack_bauer(void)
int hourDigit;
int minuteDigit;

for (hourDigit = 0; hourDigit < 24; hourDigit++)
{
for (minuteDigit = 0; minuteDigit < 60; minuteDigit++)
{
_putchar(hourDigit / 10 + 48);
			_putchar(hourDigit % 10 + 48);
			_putchar(':');
			_putchar(minuteDigit / 10 + 48);
			_putchar(minuteDigit % 10 + 48);
			_putchar('\n');
}
}
}
