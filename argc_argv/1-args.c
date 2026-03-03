#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments
 * @argv: an array of strings (arguments)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/* We use (void)argv to tell the compiler we aren't using the array */
	(void)argv;

	/* argc includes the program name, so we subtract 1 */
	printf("%d\n", argc - 1);

	return (0);
}
