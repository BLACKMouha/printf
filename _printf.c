#include "main.h"

int _printf(const char *format, ...)
{
  va_list args;
  size_t len_f, i, j, k;
  int noc = 0;
  char *str;
  char c;

  if (!format)
    return (noc);

  len_f = strlen(format);
  va_start(args, format);
  i = 0;
  while (format[i] && format[i])
  {
    if (format[i] == '%')
    {
      j = i + 1;
      if (j < len_f && format[j] && is_spec(format[j]) > 0)
      {
        switch (format[j])
        {
          case 'c':
            c = va_arg(args, int);
            write(1, &c, 1);
            noc++;
            break;

          case '%':
            write(1, &(format[j]), 1);
            noc++;
            break;

          case 's':
            str = va_arg(args, char *);
            for (k = 0; str[k]; k++)
            {
              write(1, &(str[k]), 1);
              noc++;
            }
            break;
        }
        i+=2;
      }
    }
    write(1, &(format[i]), 1);
    i++;
  }

  va_end(args);
  return (noc);
}

int is_spec(char c)
{
  int i, j;
  char specs[] = {'c', 's', '%', '\0'};
  i = j = 0;
  while (specs[i])
  {
    if (specs[i] == c)
      j++;
    i++;
  }
  return (j);
}
