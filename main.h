#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);
int printletters(char *string, char type, char flag, int width, char lengthmod);
int printnumbers(int number, char type, char flag, int width, char lengthmod);
int printescape(char character);
int printchar(int number, int width);
int printbinary(int *number);
int printoctal(int *number, char flag, char lengthmod);
int printhex(int *number, char flag, char lengthmod);

#endif
