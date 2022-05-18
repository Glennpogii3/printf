#ifndef HOLBERTON_H
#define HOLBERTON_H
#define NULL ((void *)0)

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


/* utils.c */
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/* printf.c */
int _printf(const char *, ...);

/* handler.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);


int print_rot(va_list);

int _putchar(char c);
int _print_str(char *string);
int _print_int(long int var);
int _printf(const char *format, ...);
int to_Binary(unsigned int n);
int to_Octal(unsigned int n);
int _power_recursion(int x, int y);
int to_Hexa(unsigned int num);

typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;



#endif
