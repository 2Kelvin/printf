#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _writechar(char c);
int _puts(char *str);
int printInt(int num, unsigned int n);
int printBinary(unsigned int num);
int printOctal(unsigned int x);
int printHexax(unsigned int x);
int printHexaX(unsigned int x);
int _printf(const char *format, ...);

#endif
