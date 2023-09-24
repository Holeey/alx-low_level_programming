#include "main.h"
/**
 * print_sign - determines if the input number is greater, equal or less than 0
 * @n: The input as an integer
 * Return: 1 is greater than zero and 0 is zero while -1 is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
