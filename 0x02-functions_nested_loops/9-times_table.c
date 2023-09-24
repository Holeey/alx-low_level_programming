#include "main.h"
/**
 * times_table - prints the multiplication table up to 9 times
 * Return: 0
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			result = i * j;
			_putchar('0' + result);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
