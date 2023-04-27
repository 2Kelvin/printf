#include "main.h"

/**
  * printBinary - prints binary characters
  * @num: param number
  * Return: binary number
  */

int printBinary(unsigned int num)
{
	unsigned int a, b, c, d, f;
	int count = 0;

	b = num;
	c = 1;

	for (a = 1; b > 1; a++)
	{
		b = b / 2;
		c = c * 2;
	}

	for (f = 1; f <= a; f++)
	{
		d = num / c;
		num = num % c;
		c = c / 2;
		_writechar(d + '0');
		count++;
	}

	return (count);
}
