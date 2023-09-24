#include "main.h"
/**
 * _islower - shows one of the input is a lower case character
 * @c: the character in ascii code
 * Return: 1 for lowercase cahracter and 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
