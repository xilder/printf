#ifndef MAIN_H
#define MAIN_H
/*printf function*/
int _printf(const char *format, ...);
/*get print type*/
typedef struct print_type
{
	char *c;
	int (*f)
} pt;
/*prints alpha*/

/*writes functions*/
int _putchar(char c);
int _puts(char *str);
#endif /*MAIN_H*/
