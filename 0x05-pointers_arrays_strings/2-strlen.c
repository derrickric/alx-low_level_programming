#include "main.h"
/**
 * _strlen -give the length of a string
 * @s: the string
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int y;

	for (y = 0; s[y] != '\0'; y++);
		
	return (y);
}
