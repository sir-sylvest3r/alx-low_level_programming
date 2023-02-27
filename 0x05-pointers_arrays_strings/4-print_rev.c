#include "main.h"

/**
* print_rev - prints a string in reverse
*
* @s: string to be printed
* Return: None
*/
void print_rev(char *s)
{
	int len = _strlen(s) - 1;

	while (len >= 0)
	{
	_putchar(s[len]);
	len--;
	}
	_putchar('\n');
}

/**
* _strlen - checks length of a string
*
* @s: address of s
* Return: Null
*/
int _strlen(char *s)
{
int len = 0, index = 0;
while (s[index] != '\0')
{
len++;
index++;
}
return (len);
}
