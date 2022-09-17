#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 Always(success)
 */
int main(void)
{
	/*
	 * Use of putchar for concatenation
	 */
	int i = '0', j = '2';

	strcat(i, j);
	putchar(i + j + '0');
	return 0;
}
