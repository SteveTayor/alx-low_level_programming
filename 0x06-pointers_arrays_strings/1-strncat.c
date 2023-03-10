#include "main.h"

/**
 * *_strncat - function to concatenates two strings
 *
 * @dest: destination array
 * @src: source array
 * @n: number of characters
 *
 * Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	while (*ptr != 0)
	  ptr++;
	while (n-- > 0)
	  *ptr++ = *src++;
	*ptr = 0;
	return (dest);
}
