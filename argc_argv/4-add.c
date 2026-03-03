#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: the number of arguments
 * @argv: an array of strings
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	/* If no numbers are passed, argc is 1 */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/* Check if the character is NOT a digit */
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		/* If we get here, the whole string is valid digits */
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
