#include <stdio.h>
/**
 * times_table - a function that prints the 9 times table, starting with 0
 *
 * Return: 0 Always
 */
void times_table(void)
{
	int i = 0, j = 0, m = 0,  prod;
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar(m + '0');
			for (j = 0; j <= 9; j++)
			{
				prod = (i * j);
				_putchar(',');
				_putchar(' ');
				_putchar(prod + "0');
			}
			_putchar('\n');
		}
	}
}

int main(void)
{
	int x;

	x = times_tables();
	return (x);
}
