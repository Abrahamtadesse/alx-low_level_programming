#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int len = 0;

	while (message[len] != '\0')
		len++;

	write(2, message, len);

	return (1);
} 
