#include "main.h"

/**
 * _isdigit - checks digits 0 to 9
 * @c: parameter to be checked
 * Return: 1 for success 0 fo failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
