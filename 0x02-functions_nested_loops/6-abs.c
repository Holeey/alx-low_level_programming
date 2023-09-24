#include "main.h"
/**
 * _abs - computes the absolut return value of an integer
 * @i: input the number as an integer
 * Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
