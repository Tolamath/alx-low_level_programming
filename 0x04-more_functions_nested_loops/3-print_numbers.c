#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return 0: Always
 */
void print_numbers(void)
{
	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
