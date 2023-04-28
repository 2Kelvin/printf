#include "main.h"
#include <stdlib.h>

/**
  * printHexaX - print hexadecimal X
  * @x: param to format
  * Return: count
  */

int printHexaX(unsigned int x)
{
	char *hexaX;
	unsigned int xxx = x;
	int a, b, rem, count = 0;

	if (x == 0)
		return (_writechar('0'));
	while (xxx != 0)
	{
		xxx /= 16;
		count++;
	}
	hexaX = malloc(count);
	for (a = 0; x != 0; a++)
	{
		rem = 0;
		rem = x % 16;
		if (rem < 10)
			hexaX[a] = rem + '0';
		else
			hexaX[a] = rem + '7';
		x /= 16;
	}
	for (b = a - 1; b >= 0; b--)
		_writechar(hexaX[b]);
	free(hexaX);

	return (count);
}
