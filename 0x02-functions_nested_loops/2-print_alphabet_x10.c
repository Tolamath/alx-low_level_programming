#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 *
 * return: 0
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char c;

	while (i != 11)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');

		i++;
	}
}
