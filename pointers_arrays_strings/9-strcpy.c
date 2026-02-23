/**
 * _strcpy - copies one string to another
 *
 * @dest: destination string to copy to
 *
 * @src: source string to copy
 *
 * Return: the copied string is returned.
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
