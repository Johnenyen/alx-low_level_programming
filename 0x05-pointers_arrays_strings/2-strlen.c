#include "main.h"
/**
 * _strlen - returns lenght
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int len = 0;
while (*(s + len) != '\0')
	len++;
return (len);
}
