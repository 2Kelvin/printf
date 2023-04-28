#include "main.h"

/**
 *_puts - prints strings
 *@str: pointer to string
 *Return: length of string
 */

int _puts(char *str)
{
	int len = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		_writechar(*str);
		str++;
		len++;
	}
	return (len);
}
