#include <stdio.h>

/**
 * main - main function
 *
 *Return: 0
 */

int main(void)
{
	int limit = 4000000;
	int t1 = 1;
	int t2 = 2;
	int tn;
	int sum = 2;

	while (tn <= limit)
	{
		tn = t1 + t2;
		if (tn % 2 == 0)
			sum = sum + tn;
		t1 = t2;
		t2 = tn;
	}
	printf("%d\n", sum);
	return (0);
}
