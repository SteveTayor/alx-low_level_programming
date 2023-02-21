#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - main function
 *
 * @n: integer to get last digit of
 * Return: last digit of n
 *
 */

int print_last_digit(int n)
{
         n = _abs(n);
	_putchar('0' + (n % 10));
	return (n % 10);
}
