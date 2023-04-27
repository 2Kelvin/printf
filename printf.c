#include "main.h"

/**
 * _printf - prints formatted characters
 * @format: format param
 * Return: count
 */

int _printf(const char *format, ...)
{
	va_list args;

	int count = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'X' || *format == 'x' || *format == 'o' || *format == 'b')
				count += printnum((va_arg(args, int)), *format);
			else if (*format == 'i' || *format  == 'd' || *format == 'u')
				if (*format == 'u' && va_arg(args, int) < 0)
					count += printInt(-(va_arg(args, int)), 10);
				else
					count += printInt((va_arg(args, int)), 10);
			else if (*format == 'c')
				count += _writechar(va_arg(args, int));
			else if (*format == 's')
				count += _puts(va_arg(args, char*));
			else if (*format == '%')
				count += _writechar('%');
			else
			{
				count +=  _writechar('%');
						format--;
			}
		}
		else
			count += _writechar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
