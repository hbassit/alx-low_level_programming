/**
 *_strpbrk - function that searhes a string for a set of bytes
 *@s: string
 *@accept: substring
 *Return: pointer to char in s that matches char in accept or NULL if no such
 *byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
