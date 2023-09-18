#include "main.h"

/**
 * swap_int - swaps the value of two intigers
 * @a: pointr to an int value
 * @b: pointer to another int value
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
