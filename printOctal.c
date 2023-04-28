#include "main.h"

/**
  * printOctal - print in octal format
  * @x: param to convert to octal
  * Return: count
  */

int printOctal(unsigned int x)
{
	int count = 0;
	unsigned int p, q, r, s, t;

	q = x;
	r = 1;

	for (p = 1; q > 7; p++)
	{
		q = q / 8;
		r = r * 8;
		count++;
	}

	for (t = 1; t <= p; t++)
	{
		s = x / r;
		x = x % r;
		r = r / 8;
		_writechar(s + '0');
		count++;
	}

	return (count);
}
