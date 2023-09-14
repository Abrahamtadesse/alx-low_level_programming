#include <stdio.h>

int main(void)
{
	unsigned long int t1 = 1;
	unsigned long int t2 = 2;
	unsigned long int tn;
	int i;

	printf("%lu, ", t1);
	for (i = 1 ; i < 50 ; i++)
	{
		printf("%lu", t2);
		tn = t1 + t2;
		t1 = t2;
		t2 = tn;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
