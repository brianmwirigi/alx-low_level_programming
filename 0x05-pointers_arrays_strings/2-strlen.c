#include "main.h"

/**
 * _strlen -returns the length of string
 * @s: string
 * Return: return length as integer;
 */

int _stlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len)
}
