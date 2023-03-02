#include "main.h"

/**
 * *rot13 - function that encodes a string.
 * @s: pointer pointed to the variable s , of type character
 * Return: Pointer P , pointed to the variable s of type char.
 * Update V2.0 : using Pointers instead of arrays to minimize the use
 * of allocated memory and to improve the esthetic and simplicity of the code.
 */

char *rot13(char *s)
{
int i;
char *p = s;

char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (*s != '\0')
{
	i = 0;
	while (i < 53)
	{
		if (*s == input[i])
	{
			*s = output[i];
				break;
	}
		i++;
	}
		s++;
	}
return (p);
}
