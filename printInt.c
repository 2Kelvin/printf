#include "main.h"

/**
  * printInt - prints ints
  * @num: number parameter
  * Return: count
  */

int printInt(int num)
{
	int count = 0;
	unsigned int a, b, c, d, f;

	if (num < 0)
	{
		_writechar('-');
		num = num * -1;
		count++;
	}
	b = num;
	c = 1;
	for (a = 1; b > 9; a++)
	{
		b = b / 10;
		c = c * 10;
	}
	for (f = 1; f <= a; f++)
	{
		d = num / c;
		num = num % c;
		c = c / 10;
		_writechar(d + '0');
		count++;
	}

	return (count);
}
