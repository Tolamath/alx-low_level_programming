#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable n
 *
 * DESCRIPTION
 * In the main function, declare variables.
 * Use srand function and define n
 *
 */

int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;
	
	if (p > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, p);
	}
	else if (p == 0)
	{
		printf("Last digit of %d is 0", n);
	}
	else 
	{
		printf("Last digit of %d is %d, and is less than 6 and not 0");
	}

	return (0);
}
