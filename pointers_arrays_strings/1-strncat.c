#include "main.h"
/**
 * _strncat - Let's concatenates two strings again
 * Only using at most n bytes from src
 * @dest: Input value
 * @src: Input value
 * @n: Input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
