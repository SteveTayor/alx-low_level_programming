#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - to copy string.
 * @dest : pointer of char.
 * @src : pointer of char.
 * @n: integer.
 * Return: char.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		for (; i < n; i++)

		dest[i] = '\0';


	}
	return (dest);
}
