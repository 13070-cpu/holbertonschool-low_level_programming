#include <stdio.h>

/**
 * print_array - prints out the specified array number value
 *
 * @a: pointer to array
 *
 * @n: amount of array elements to print
 *
 */

void print_array(int *a, int n)
{
	int go = 0;

	for (go = 0; go < n; go++)
	{
		printf("%d", a[go]);
		if (go < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
