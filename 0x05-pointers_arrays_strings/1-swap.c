#include "main.h"
/**
 * swap_int - A function that swaps the value of two integers
 * @a: int to swap
 * @b: int to swap
 */
void swap_int(int *a, int *b)
{
int a;
a = *a;
*a = *b;
*b = a;
}
