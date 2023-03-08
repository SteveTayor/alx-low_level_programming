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
/**
 * rot13 - converts to rot13
 * @s: string to convert to rot13
 * Return: returns a char
 */
char *rot13(char *s);
/**
 * leet - switches characters to 1337
 * @s: string to switch
 *
 * Return: returns character
 */
char *leet(char *s);
/**
 * cap_string - string to capitalize;
 * @s: string to capitalize
 * Return: return the string
 */
char *cap_string(char *s);
/**
 * string_toupper - makes lower to upper
 * @s: character to make upper
 * Return: character value
 */
char *string_toupper(char *s);
/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: how many elements
 */
void reverse_array(int *a, int n);
/**
 * _strcmp - compares strings
 *
 * @s1: first string
 * @s2: second string to compare
 * Return: int value
 */
int _strcmp(char *s1, char *s2);
/**
 * _strncpy - function to copy
 * @dest: destination to copy
 * @src: source to copy
 * @n: times to copy
 * Return: return char value
 */
char *_strncpy(char *dest, char *src, int n);
/**
 * _strncat - concat string at n times
 * @dest: destination source
 * @src: source of array
 * @n: n amount of times
 * Return: return char value
 */
char *_strncat(char *dest, char *src, int n);
/**
 * _strcat - concats strings
 * @dest: destination of string
 * @src: source of string to concat
 *
 * Return: returns char value
 */
char *_strcat(char *dest, char *src);
/**
 * _atoi - convert char to int
 * @s: string
 * Return: returns a value
