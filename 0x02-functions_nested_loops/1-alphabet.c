#include "main.h"
/**
 * print_alphabet - this function prints alphabets in lowercase
 *
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}

