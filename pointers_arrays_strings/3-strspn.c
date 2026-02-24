/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the string containing allowed characters
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, accept_checker;

	while (*s)
	{
		accept_checker = 0;
		i = 0;

		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				accept_checker = 1;
				break;
			}
			i++;

		}

		if (accept_checker)
		{
			count++;
			s++;
		}
		else
		{
			return (count);
		}
	}

	return (count);
}
