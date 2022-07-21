#include "main.h"


/**
 * is_sqrt - check if it is a sqrt
 * @a: root
 * @b: square
 *
 * Return: boolean
 */
int is_sqrt(float a, float b)
{
	return ((a * a) == b);
}


/**
 * @a: number
 * @b: guess
 *
 * Return: sqrt
 */
float find_sqrt(float a, float b)
{
	float f;

	f = (b + (a / b)) / 2;
	if (is_sqrt(f, a))
	{
		return (f);
	}
	return (find_sqrt(a, f));
}
