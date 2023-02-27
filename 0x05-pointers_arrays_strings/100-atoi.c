#include "main.h"

/**
 * _atoi - convert a string representation of an integer to an integer
 *
 * @s: string possibly containing an integer
 *
 * Return: first integer in string
 */
int _atoi(char *s) {
  int sign = 1, result = 0, digit;
  while (*s == ' ' || *s == '\t' || *s == '\n')
      s++;
  if (*s == '-') {
    sign = -1;
    s++;
   } else if (*s == '+') {
    s++;
   }
  while (*s >= '0' && *s <= '9') {
    digit = *s - '0';
    if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
            result = (sign == -1) ? INT_MIN : INT_MAX;
            break;
      }
     result = result * 10 + digit;
     s++;
    }
    return sign * result;
}
