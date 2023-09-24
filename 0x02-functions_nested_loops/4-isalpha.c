#include "main.h"
/**
 * _isalpha - shows if input is a letter
 * @c: the character ascii code
 * Return: 1 for letters and 0 for others
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 98))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
