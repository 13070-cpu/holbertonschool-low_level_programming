/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to look for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}
