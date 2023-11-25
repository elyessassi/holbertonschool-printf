#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>


typedef struct ntype_t {
  char character;
  void (*f)(va_list);
} ntype_t;

int _putchar(char c);
int _printf(const char *format, ...);
void errormsg();
void pc(va_list l);
void ppercent(va_list l);
void ps(va_list l);
void p_int(va_list l);
void p_dec(va_list l);

#endif
