#include <stdio.h>

int main(void)
{
	int n;

	for (n = 1 ; n <= 100 ; n = n + n)
		printf("%d, ", n);
	return (0);
}
