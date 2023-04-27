#include <unistd.h>
#include "main.h"

/**
 * _writechar - prints char
 * @c: pointer to char
 * Return: character
 */

int _writechar(char c)
{
	return (write(1, &c, 1));
}
