#include "main.h"
/**
 * _strcmp - Funtion to extract the  path
 * @s1: string  one
 * @s2: string two
 * Return: The path
 *
 */

int _strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
	s1++;
	s2++;
}
	return (*s1 + *s2);
}
