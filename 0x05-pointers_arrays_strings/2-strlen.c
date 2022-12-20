#include "main.h"
/**
 * _strlen - return the lenth of a string
 * @s: the string char
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		(a++);
	return (a);
}
