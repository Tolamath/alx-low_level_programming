#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: is the name of the first argument passed
 * Return: 0 Always
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
