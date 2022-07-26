#include "main.h"
/**
 * _puts - prints a string
 * @str: the string
 * Return: the length of the string
 */
void _puts(char *str)
{
	int y = 0;

	while (str[y] != '\0')
{
	_putchar(str[y]);
	y++;
}
_putchar('\n');
}
