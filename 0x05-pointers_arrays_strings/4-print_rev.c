#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a newline
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int length = 0;
	int m;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (m = length; m > 0; m--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
