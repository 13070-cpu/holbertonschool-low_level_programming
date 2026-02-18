/**
 * swap_int - swaps two integers values
 *
 * @a: is the pointer to first value
 *
 * @b: is pointer to second value
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
