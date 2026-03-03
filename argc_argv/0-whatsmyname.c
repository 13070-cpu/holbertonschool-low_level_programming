#include <stdio.h>

/**
 * main - prints the name of the program, followed by a new line
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
