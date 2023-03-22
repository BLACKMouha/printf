#ifndef MAIN_H
#define MAIN_H

/** ===== C Header Files ===== */
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

/** ===== Function Prototypes ===== */
/** DIY printf prototype*/
int _printf(const char *format, ...);

/** String Utility*/
int _strlen(const char *s);
int _strcmp(const char *s1, const char *s2);
char *_strdup(char *str);

/** String Printers*/
int _putchar(char c);
int _puts(char *s);
void rev_str(char *s);

/** Converters*/
char *int2bin(long int n);
char *_putbinint(long int n);

/** Number Utility */
unsigned long int _abs(long int x);

/** Number Printers*/
int _putint(int n);
int _putint2bin(long int n);

#endif /* MAIN_H **/
