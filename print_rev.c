#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"
/**
*print_rev - prints astring in reverse
*@r: string to print
*Return: number of chars printed
*/
int print_rev(int r)
{
	char *st;
	int i, j = 0;

	st = va_arg(r, char *);
	if (st == NULL)
		st = ")llun(";
	for (i = 0; st[i] != '\0'; i++)
		;
	for (i -= 1 ; i >= 0; i--)
	{
		_putchar(st[i]);
		j++;
	}
	return (j);
}