#ifndef MAIN_H
#define MAIN_H
/** C header files **/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/** Prototypes */
int _printf(const char *format, ...);
int is_spec(char c);
int loop_write(char *s);
#endif /** MAIN_H */
