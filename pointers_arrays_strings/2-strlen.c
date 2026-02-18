/**
 * _strlen - prints out the length of a string
 *
 * @s: pointer for value
 *
 * Return: the string length value
 */

int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}

	return (n);
}
