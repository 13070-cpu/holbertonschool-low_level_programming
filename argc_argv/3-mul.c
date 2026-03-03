#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @argv: an array of strings
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* 1. Check if we have exactly two arguments + the program name */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* 2. Convert strings to integers using atoi */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* 3. Perform the multiplication */
	result = num1 * num2;

	/* 4. Print the result */
	printf("%d\n", result);

	return (0);
}
