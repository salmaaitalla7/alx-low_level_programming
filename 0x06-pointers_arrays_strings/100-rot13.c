#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: poiter to string params
 * Return: *s
 */

char *rot13(char *s)
{
	int i, j;

	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == datarot[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
