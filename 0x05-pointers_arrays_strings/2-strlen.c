#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: counted string
 * Return: string length
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	return (length);
}
