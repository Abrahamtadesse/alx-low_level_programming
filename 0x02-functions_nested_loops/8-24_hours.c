#include "main.h"
/**
 * jack_bauer - prints time
 *
 * return: always 0
 */
void jack_bauer(void)
{
	int n1 = 0, n2;

	while (n1 <= 23)
	{
		n2 = 0;
		while (n2 <= 59)
		{
			_putchar(n1 / 10 + 48);
			_putchar(n1 % 10 + 48);
			_putchar(':');
			_putchar(n2 / 10 + 48);
			_putchar(n2 % 10 + 48);
			_putchar('\n');
			n2++;
		}
		n1++;
	}
}
