#include "main.h"

/**
 * print_lasst_digit - prints last digit
 * @i: function parameter
 * Return: n
 */

int print_lsat_digit(int i)
{
	int n;

	n = i % 10;
	if (i < 0)
		n = -n;
	_putchar(n = '0');
	return (n);
}
