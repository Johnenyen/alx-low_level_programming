#include<stdio>
#include<string.h>
#include "main.h"
/**
 * print_rev - print a string
 * @s: string
 * Return: nothing
 */
void print_rev(char *s)
{
int len = strlen(s);
while (len--)
putchar(*(s + len));
putchar (10);
}
