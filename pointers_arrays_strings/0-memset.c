/**
 * _memset - fills memory with a constant byte
 * @s: the address of the memory area to fill
 * @b: the character (byte) to fill the memory with
 * @n: the number of bytes to be filled
 *
 * Return: a pointer to the filled memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
