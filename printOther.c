#include "main.h"

/**
  * printOther - prints formats x, X, o & u
  * @num: number param
  * @type: type param
  * Return: count
  */

int printOther(int num, char type)
{
	int count = 0;
	unsigned int a, b = num, c = 1, d, f, n;

	if (num == '0' || num == '\0')
	{
		return (_writechar('0'));
	}
	if (num < 0)
		num = num * -1;
	if (type == 'b')
		return (printInt(num, 2));
	else if (type == 'o')
		return (printInt(num, 8));
	n = 16;
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
		if (d < 10)
			count += _writechar(d + '0');
		else
		{
			if (type == 'X')
				d = 'A' + (d - 10);
			else if (type == 'x')
				d = 'a' + (d - 10);
			count += _writechar(d);
		}
	}
	return (count);
}
