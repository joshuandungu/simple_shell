#include "main.h"

/**
 * minusc - Funtion to exclude the "\n"character from user input
 *@str:  inputed  command
 *@length: length of the  user input
 *Return: return the command without a "\n" character  the end
 */
char *minusc(char *str, int length)
{
	if (str > 0 && str[length - 1] == '\n')
		str[length - 1] = '\0';
	return (str);
}
