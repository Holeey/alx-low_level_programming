#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 1 success, -1 failed.
 */
int _putchar(cahr c)
{
	return (write(1, &c, 1));
}
