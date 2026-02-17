#include <stdio.h>

/**
 * main - prints out the fizz buzz
 *
 * Return: 0 if true.
 */

int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (((number % 3) == 0) && ((number % 5) == 0))
		{
			printf("FizzBuzz ");
			continue;
			number++;
		}

		else if ((number % 3) == 0)
		{
			printf("Fizz ");
			continue;
			number++;
		}

		else if ((number % 5) == 0)
		{
			printf("Buzz ");
			continue;
			number++;
		}
		printf("%d ", number);
	}
	printf("\n");

	return (0);
}
