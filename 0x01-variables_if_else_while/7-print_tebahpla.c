#include <stdio.h>
/**
 * main - print the lowercase alphabet in reverse
 * Declare variables
 * Use the for loop
 * Return:0 Always(Success)
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	{
		putchar(low);
	}
	putchar('\n');

	return (0);
}
