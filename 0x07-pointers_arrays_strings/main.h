#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * set_string - sets the value of a pointer to a char
 * @s: string to set to
 * @to: set to
 */
void set_string(char **s, char *to);

/**
 * print_diagsums - prints diagonal sums
 * @a: array to do
 * @size: size of arrays
 */
void print_diagsums(int *a, int size);

void print_chessboard(char (*a)[8]);

/**
 * _strstr - locates substring
 * @haystack: string to locate substring
 * @needle: string to locate
 * Return: return string found
 */
char *_strstr(char *haystack, char *needle);

/**
 * _strpbrk - search string for all chars
 * @s: string to search
 * @accept: accepting string
 * Return: return those letters only
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strspan  - length of previx substring
 * @s: string to go through
 * @accept: accept bytes
 * Return: returns usigned int value
 */
unsigned int _strspn(char *s, char *accept);
/**
 * _strchr - locates character in string
 * @s: string to find character
 * @c: character to find
 * Return: found character
 */
char *_strchr(char *s, char c);
/**
 * _memcpy - copies value from src to dest
 * @dest: destination to copy
 * @src: source to copy from
 * @n: amount of times from 0 to copy
 * Return: return string char value
 */
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _memset - set memory to a character
 * @s: value and pointer
 * @b: value to replace at pointers
 * @n: n amount of times to replace
 * Return: returns a pointer to s
 */
char *_memset(char *s, char b, unsigned int n);
/**
 * print_number- prints a number
 * @n: number to print to character
 */
void print_number(int n);

#endif
