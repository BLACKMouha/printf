#ifndef MAIN_H
#define MAIN_H

/** ===== C Header Files ===== */
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

/** ===== Structures ===== */
/**
 * struct int_spec_s - Struct format
 * @spec: specifier
 * @f: function called for the specifier
 */
typedef struct int_spec_s
{
    char ispec;
    int (*f)(va_list ap);
} int_spec_t;

/** ===== Function Prototypes ===== */
/** DIY printf prototype*/
int _printf(const char *format, ...);

/** String Utility*/
int _strlen(const char *s);
int _strcmp(const char *s1, const char *s2);
char *_strdup(char *str);
char *_strchr(char *s, char c);

/** String Printers*/
int _putchar(char c);
int _puts(char *s);
void rev_str(char *s);
int _putstr(va_list ap);
int _putchr(va_list ap);

/** Converters*/
char *converter(unsigned long int n, int base, int l);

/** Number Utility */
unsigned long int _abs(long int x);

/** Number Printers*/
int _putint(va_list ap);
int _putbin(va_list ap);
int _putoct(va_list ap);
int _putuint(va_list ap);
int _puthex(va_list ap);
int _putheX(va_list ap);
int _puthexX(va_list ap, int lower);

int (*get_printer(char spec))(va_list);
int is_spec(const char spec);

#endif /* MAIN_H **/
