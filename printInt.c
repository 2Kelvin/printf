#include "main.h"

/**
  * printInt - print integers
  * @num: number
  * @n: param 2
  * Return: count
  */

int printInt(int num, unsigned int n)
{
	int count = 0;
	unsigned int a, b, c, d, f;

	if (num == '\0')
	{
		return (_writechar('0'));
	}
	if (num < 0)
	{
		count += _writechar('-');
		num = num * -1;
	}
	b = num;
	c = 1;
	for (a = 1; b > (n - 1); a++)
	{
		b = b / n;
		c = c * n;
	}
	for (f = 1; f <= a; f++)
	{
		d = num / c;
		num = num % c;
		c = c / n;
		count += _writechar(d + '0');
	}
	return (count);
}
