#include "main.h"
#include <stdlib.h>

/**
  * printHexax - print hexadecimal x
  * @x: param to convert
  * Return: count
  */

int printHexax(unsigned int x)
{
	unsigned int xx = x;
	int a, b;
	int rem, count = 0;
	char *hexa;

	if (x == 0)
		return (_writechar('0'));
	while (xx != 0)
	{
		xx = xx / 16;
		count++;
	}
	hexa = malloc(count);
	for (a = 0; x != 0; a++)
	{
		rem = 0;
		rem = x % 16;
		if (rem < 10)
			hexa[a] = rem + '0';
		else
			hexa[a] = rem + 'W';
		x = x / 16;
	}
	for (b = a - 1; b >= 0; b--)
		_writechar(hexa[b]);
	free(hexa);

	return (count);
}
