#include "main.h"
/**
 * jack_bauer - prints every minutes of the day of Jack Bauer
 *
 *
 * Return: 0 Always
 */
void jack_bauer(void)
{
	int min = 0;
	int hours = 0;
	int min_remainder;
	int hours_remainder;

	while (hours <= 23)
	{
		while (min <= 59)
		{
			min_remainder = (min % 10);
			hours_remainder = (hours % 10);

			_putchar(hours / 10 + '0');
			_putchar(hours_remainder + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min_remainder + '0');
			_putchar('\n');

			min++;
		}
		hours++;
		min = 0;
	}
}
