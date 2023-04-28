#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _writechar(char c);
int _puts(char *str);
int printInt(int num, unsigned int n);
int printOther(int num, char type);
int printBinary(unsigned int num);
int _printf(const char *format, ...);

#endif
