#include "main.h"
/**
* print_to_98 - prints all natueal numbers.
* n - a variable
* Return: 0
*/
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d", n--);
}
else
{
while (n < 98)
printf("%d", n++);
printf("%\n", n);
}
}
