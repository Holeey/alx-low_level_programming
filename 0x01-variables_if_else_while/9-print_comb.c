#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
