#include "main.h"

/**
 * print_alpha10 - this uses print_alphabet
 * and prints it's result 
 * 10 times 
 *
 * Return: 0.
 */

int print_alpha10(void)
{
	int a = 0;

	while (a <= 10)
	{
		print_alphabet();
		a++;
	}
	return (0);
}
