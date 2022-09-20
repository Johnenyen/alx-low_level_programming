#include<stdio.h>
#include "main.h"
/**
 * _puts - prints a strinr: string
 * @str: string
 *
 * Description: print a string
 * on success: ewturn no error
 */
void _puts(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
putchar(*(str + i));
i++;
}
putchar (10);
}
