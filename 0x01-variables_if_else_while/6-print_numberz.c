#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i++);
	}
	putchar('\n');
	return (0);
}

