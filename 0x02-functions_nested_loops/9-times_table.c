#include "main.h"
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
			putchar(m + '0');
			for (j = 1; j <= 9; j++)
			{
				prod = (i * j);
				putchar(',');
				putchar(' ');

				if (prod > 9)
				{
					int x = (prod / 10);
					int y = (prod % 10);
					putchar(x + '0');
					putchar(y + '0');
				}
				else
				{
					putchar(' ');
					putchar(prod + '0');
				}
			}
			putchar('\n');
		}
	}
}
